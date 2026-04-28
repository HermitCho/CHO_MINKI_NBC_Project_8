// Fill out your copyright notice in the Description page of Project Settings.

#include "NBC_GameState.h"
#include "NBC_GameInstance.h"
#include "NBCPlayerController.h"
#include "NBC_SpawnVolume.h"
#include "NBC_CoinItem.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "Engine/Engine.h"

ANBC_GameState::ANBC_GameState()
{
	Score = 0;
	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;
	LevelDurations = { 30.0f, 20.f, 10.f }; // 한 레벨당 30초
	CurrentLevelDuration = LevelDurations[0];
	CurrentLevelIndex = 0;
	MaxLevels = 3;
	SpawnItemCountLvl = { 40, 30, 20 };
}

void ANBC_GameState::BeginPlay()
{
	Super::BeginPlay();

	UpdateHUD();
	// 게임 시작 시 첫 레벨부터 진행
	StartLevel();

	GetWorldTimerManager().SetTimer(
		HUDUpdateTimerHandle,
		this,
		&ANBC_GameState::UpdateHUD,
		0.1f,
		true
	);
}

int32 ANBC_GameState::GetScore() const
{
	return Score;
}

void ANBC_GameState::AddScore(int32 Amount)
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UNBC_GameInstance* NBCGameInstance = Cast<UNBC_GameInstance>(GameInstance);
		if (NBCGameInstance)
		{
			NBCGameInstance->AddToScore(Amount);
		}
	}
}

void ANBC_GameState::StartLevel()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (ANBCPlayerController* NBCPlayerController = Cast<ANBCPlayerController>(PlayerController))
		{
			NBCPlayerController->ShowGameHUD();
		}
	}
		
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UNBC_GameInstance* NBCGameInstance = Cast<UNBC_GameInstance>(GameInstance);
		if (NBCGameInstance)
		{
			CurrentLevelIndex = NBCGameInstance->CurrentLevelIndex;
			
			if (LevelDurations.IsValidIndex(CurrentLevelIndex))
			{
				CurrentLevelDuration = LevelDurations[CurrentLevelIndex];
			}
		}
	}

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Wave %d Start!"), CurrentLevelIndex + 1));
	}

	// 레벨 시작 시, 코인 개수 초기화
	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;

	// 현재 맵에 배치된 모든 SpawnVolume을 찾아 아이템 40개를 스폰
	TArray<AActor*> FoundVolumes;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANBC_SpawnVolume::StaticClass(), FoundVolumes);

	if (FoundVolumes.Num() > 0)
	{
		ANBC_SpawnVolume* SpawnVolume = Cast<ANBC_SpawnVolume>(FoundVolumes[0]);
		if (SpawnVolume)
		{
			for (int32 i = 0; i < SpawnItemCountLvl[CurrentLevelIndex]; i++)
			{
				AActor* SpawnedActor = SpawnVolume->SpawnRandomItem();
				if (SpawnedActor && SpawnedActor->IsA(ANBC_CoinItem::StaticClass()))
				{
					SpawnedCoinCount++;
				}
			}
		}
	}

	GetWorldTimerManager().SetTimer(
		LevelTimerHandle,
		this,
		&ANBC_GameState::OnLevelTimeUp,
		CurrentLevelDuration,
		false
	);

	//UpdateHUD();

	UE_LOG(LogTemp, Warning, TEXT("Level %d Start!, Spawned %d coin"),
		CurrentLevelIndex + 1,
		SpawnedCoinCount);
}

void ANBC_GameState::OnLevelTimeUp()
{
	// 시간이 다 되면 레벨을 종료
	EndLevel();
}

void ANBC_GameState::OnCoinCollected()
{
	CollectedCoinCount++;

	UE_LOG(LogTemp, Warning, TEXT("Coin Collected: %d / %d"),
		CollectedCoinCount,
		SpawnedCoinCount)

		// 현재 레벨에서 스폰된 코인을 전부 주웠다면 즉시 레벨 종료
		if (SpawnedCoinCount > 0 && CollectedCoinCount >= SpawnedCoinCount)
		{
			EndLevel();
		}
}

void ANBC_GameState::EndLevel()
{
	// 타이머 해제
	GetWorldTimerManager().ClearTimer(LevelTimerHandle);

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UNBC_GameInstance* NBCGameInstance = Cast<UNBC_GameInstance>(GameInstance);
		if (NBCGameInstance)
		{
			AddScore(Score);
			CurrentLevelIndex++;
			NBCGameInstance->CurrentLevelIndex = CurrentLevelIndex;

			if (CurrentLevelIndex >= MaxLevels)
			{
				OnGameOver();
				return;
			}

			if (LevelMapNames.IsValidIndex(CurrentLevelIndex))
			{
				UGameplayStatics::OpenLevel(GetWorld(), LevelMapNames[CurrentLevelIndex]);
			}
			else
			{
				OnGameOver();
			}
		}
	}
}

void ANBC_GameState::OnGameOver()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (ANBCPlayerController* NBCPlayerController = Cast<ANBCPlayerController>(PlayerController))
		{
			NBCPlayerController->SetPause(true);
			NBCPlayerController->ShowMainMenu(true);
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Game Over!!"));
}

void ANBC_GameState::UpdateHUD()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		ANBCPlayerController* NBCPlayerController = Cast<ANBCPlayerController>(PlayerController);
		{
			if (UUserWidget* HUDWidget = NBCPlayerController->GetHUDWidget())
			{
				if (UTextBlock* TimeText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Time"))))
				{
					float RemainingTime = GetWorldTimerManager().GetTimerRemaining(LevelTimerHandle);
					TimeText->SetText(FText::FromString(FString::Printf(TEXT("Time: %.1f"), RemainingTime)));
				}

				if (UTextBlock* ScoreText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Score"))))
				{
					if (UGameInstance* GameInstance = GetGameInstance())
					{
						UNBC_GameInstance* NBCGameInstance = Cast<UNBC_GameInstance>(GameInstance);
						if (NBCGameInstance)
						{
							ScoreText->SetText(FText::FromString(FString::Printf(TEXT("Score: %d"), NBCGameInstance->TotalScore)));
						}
					}
				}

				if (UTextBlock* LevelIndexText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Level"))))
				{
					LevelIndexText->SetText(FText::FromString(FString::Printf(TEXT("Level: %d"), CurrentLevelIndex + 1)));
				}
			}
		}
	}
}