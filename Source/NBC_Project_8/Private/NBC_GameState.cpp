// Fill out your copyright notice in the Description page of Project Settings.

#include "NBC_GameState.h"
#include "NBC_GameInstance.h"
#include "NBCPlayerController.h"
#include "NBC_SpawnVolume.h"
#include "NBC_CoinItem.h"
#include "NBC_Character.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "Engine/Engine.h"
#include "Components/RichTextBlock.h"
#include "Engine/DamageEvents.h"

ANBC_GameState::ANBC_GameState()
{
	Score = 0;
	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;
	LevelDurations = { 15.0f, 10.f, 20.f }; // 한 레벨당 30초
	CurrentLevelDuration = LevelDurations[0];
	CurrentLevelIndex = 0;
	MaxLevels = 3;
	SpawnItemCountLvl = { 40, 30, 20 }; //레벨 별 아이템 개수
	bIsSpikeEventOn = false;
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

	if (CurrentLevelIndex == 1)
	{
		ShowEventMessage(TEXT("Spike Trap Planted!"));
	}

	if (CurrentLevelIndex == 2)
	{
		ShowEventMessage(TEXT("Random Explosion Started!"));
		StartExplosionEvent();
	}
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
			//캐릭터 체력 레벨 전환 시에도 유지되는 if문
			if (ACharacter* PlayerChar = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
			{
				if (ANBC_Character* NBCChar = Cast<ANBC_Character>(PlayerChar))
				{
					NBCGameInstance->CurrentPlayerHealth = NBCChar->GetHealth();
					NBCGameInstance->bIsFirstStart = false;
				}
			}

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
			//NBCPlayerController->SetPause(true);
			NBCPlayerController->ShowMainMenu(true);
			NBCPlayerController->bIsRestartMenu = true;
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

				//디버프 텍스트 UI 세팅
				if (URichTextBlock* DebuffText = Cast<URichTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Debuff"))))
				{
					ACharacter* MyCharacter = NBCPlayerController->GetCharacter();
					ANBC_Character* PlayerCharacter = Cast<ANBC_Character>(MyCharacter);

					if (PlayerCharacter)
					{
						FString DebuffString = PlayerCharacter->GetDebuffText();

						DebuffText->SetText(FText::FromString(DebuffString));

						if (DebuffString.IsEmpty())
						{
							DebuffText->SetVisibility(ESlateVisibility::Collapsed);
						}
						else
						{
							DebuffText->SetVisibility(ESlateVisibility::Visible);
						}
					}
				}
			}
		}
	}
}

//이벤트 메시지 UI로 출력
void ANBC_GameState::ShowEventMessage(
	const FString& Message,
	float Duration
)
{
	ActiveEventMessages.Add(Message);

	RefreshEventUI();

	FTimerHandle TempHandle;
	GetWorldTimerManager().SetTimer(
		TempHandle,
		FTimerDelegate::CreateUObject(
			this,
			&ANBC_GameState::RemoveEventMessage,
			Message
		),
		Duration,
		false
	);
}

//이벤트 메시지 UI 삭제
void ANBC_GameState::RemoveEventMessage(FString Message)
{
	ActiveEventMessages.Remove(Message);
	RefreshEventUI();
}

//이벤트 메시지 UI 새로고침
void ANBC_GameState::RefreshEventUI()
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (ANBCPlayerController* NBCPC = Cast<ANBCPlayerController>(PC))
		{
			if (UUserWidget* HUD = NBCPC->GetHUDWidget())
			{
				if (UTextBlock* EventText =
					Cast<UTextBlock>(HUD->GetWidgetFromName(TEXT("Event"))))
				{
					if (ActiveEventMessages.IsEmpty())
					{
						EventText->SetVisibility(
							ESlateVisibility::Collapsed
						);
						return;
					}

					FString CombinedText;

					for (const FString& Msg : ActiveEventMessages)
					{
						CombinedText += Msg + TEXT("\n");
					}

					EventText->SetText(
						FText::FromString(CombinedText)
					);

					EventText->SetVisibility(
						ESlateVisibility::Visible
					);
				}
			}
		}
	}
}

//여려 개의 스파이크가 한번의 이벤트 메시지 UI만 출력하도록 하는 함수
void ANBC_GameState::SpikeTrapEvent()
{
	if (!bIsSpikeEventOn)
	{
		ShowEventMessage("Spike Activate!");

		GetWorldTimerManager().SetTimer(
			SpikeEventTimerHandle,
			this,
			&ANBC_GameState::TurnBoolSpikeEvent,
			0.5f,
			true
		);
	}
	bIsSpikeEventOn = true;
}

void ANBC_GameState::TurnBoolSpikeEvent()
{
	bIsSpikeEventOn = false;
}

void ANBC_GameState::StartExplosionEvent()
{
	GetWorldTimerManager().SetTimer(
		ExplosionTimerHandle,
		this,
		&ANBC_GameState::SpawnExplosionWarning,
		3.f,
		true
	);
}

void ANBC_GameState::SpawnExplosionWarning()
{
	ACharacter* Player =
		UGameplayStatics::GetPlayerCharacter(this, 0);

	if (!Player) return;

	ShowEventMessage(TEXT("Random Explosion Incoming!"));

	for (int i = 0; i < 3; ++i)
	{
		FVector RandomOffset(
			FMath::RandRange(-300.f, 300.f),
			FMath::RandRange(-300.f, 300.f),
			0.f
		);

		FVector TargetLocation = Player->GetActorLocation() + RandomOffset;

		FTimerHandle TempHandle;
		GetWorldTimerManager().SetTimer(
			TempHandle,
			FTimerDelegate::CreateUObject(
				this,
				&ANBC_GameState::ExplodeAtLocation,
				TargetLocation
			),
			0.5f,
			false
		);
	}
}

void ANBC_GameState::ExplodeAtLocation(FVector Location)
{
	if (ExplosionParticle)
	{
		UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			ExplosionParticle,
			Location,
			FRotator::ZeroRotator,
			true
		);
	}

	if (ExplosionSound)
	{
		UGameplayStatics::SpawnSoundAtLocation(
			GetWorld(),
			ExplosionSound,
			Location
		);
	}

	ACharacter* Player =
		UGameplayStatics::GetPlayerCharacter(this, 0);

	if (!Player) return;

	float Distance = FVector::Dist(
		Player->GetActorLocation(),
		Location
	);

	if (Distance < 200.f)
	{
		Player->TakeDamage(30.f, FDamageEvent(), nullptr, this);
	}
}