// Fill out your copyright notice in the Description page of Project Settings.


#include "NBCPlayerController.h"
#include "NBC_GameState.h"
#include "NBC_GameInstance.h"
#include "EnhancedInputSubsystems.h" // Enhanced Input System의 Local Player Subsystem을 사용하기 위해 포함
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h" // 헤더 추가
#include "Components/TextBlock.h"

ANBCPlayerController::ANBCPlayerController()
    : InputMappingContext(nullptr),
    MoveAction(nullptr),
    JumpAction(nullptr),
    LookAction(nullptr),
    SprintAction(nullptr),
	HUDWidgetClass(nullptr),
	HUDWidgetInstance(nullptr),
	MainMenuWidgetClass(nullptr),
	MainMenuWidgetInstance(nullptr)
{
}

void ANBCPlayerController::BeginPlay()
{
    Super::BeginPlay();

    // 현재 PlayerController에 연결된 Local Player 객체를 가져옴    
    if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
    {
        // Local Player에서 EnhancedInputLocalPlayerSubsystem을 획득
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
        {
            if (InputMappingContext)
            {
                // Subsystem을 통해 우리가 할당한 IMC를 활성화
                // 우선순위(Priority)는 0이 가장 높은 우선순위
                Subsystem->AddMappingContext(InputMappingContext, 0);
            }
        }
    }

	// 게임 실행 시 메뉴 레벨에서 메뉴 UI 먼저 표시
	FString CurrentMapName = GetWorld()->GetMapName();
	if (CurrentMapName.Contains("MenuLevel"))
	{
		ShowMainMenu(false);
	}

    //if (HUDWidgetClass)
    //{
    //    HUDWidgetInstance = CreateWidget<UUserWidget>(this, HUDWidgetClass);
    //    if (HUDWidgetInstance)
    //    {
    //        HUDWidgetInstance->AddToViewport();
    //    }
    //}

    //ANBC_GameState* NBCGameState = GetWorld() ? GetWorld()->GetGameState<ANBC_GameState>() : nullptr;
    //if (NBCGameState)
    //{
    //    NBCGameState->UpdateHUD();
    //}
}

UUserWidget* ANBCPlayerController::GetHUDWidget() const
{
    return HUDWidgetInstance;
}

// 메뉴 UI 표시
void ANBCPlayerController::ShowMainMenu(bool bIsRestart)
{
	// HUD가 켜져 있다면 닫기
	if (HUDWidgetInstance)
	{
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	// 이미 메뉴가 떠 있으면 제거
	if (MainMenuWidgetInstance)
	{
		MainMenuWidgetInstance->RemoveFromParent();
		MainMenuWidgetInstance = nullptr;
	}

	// 메뉴 UI 생성
	if (MainMenuWidgetClass)
	{
		MainMenuWidgetInstance = CreateWidget<UUserWidget>(this, MainMenuWidgetClass);
		if (MainMenuWidgetInstance)
		{
			MainMenuWidgetInstance->AddToViewport();

			bShowMouseCursor = true;
			SetInputMode(FInputModeUIOnly());
		}

		if (UTextBlock* ButtonText = Cast<UTextBlock>(MainMenuWidgetInstance->GetWidgetFromName(TEXT("StartButtonText"))))
		{
			if (bIsRestart)
			{
				ButtonText->SetText(FText::FromString(TEXT("Restart")));
			}
			else
			{
				ButtonText->SetText(FText::FromString(TEXT("Start")));
			}
		}

		if (UTextBlock* ButtonText2 = Cast<UTextBlock>(MainMenuWidgetInstance->GetWidgetFromName(TEXT("ExitButtonText"))))
		{
			if (bIsRestart)
			{
				ButtonText2->SetText(FText::FromString(TEXT("Back to Menu")));
			}
			else
			{
				ButtonText2->SetText(FText::FromString(TEXT("Exit")));
			}
		}

		if (bIsRestart)
		{
			//게임 종료 애니메이션 추가
			UFunction* PlayAnimFunc = MainMenuWidgetInstance->FindFunction(FName("PlayGameOverAnim"));
			if (PlayAnimFunc)
			{
				MainMenuWidgetInstance->ProcessEvent(PlayAnimFunc, nullptr);
			}

			if (UTextBlock* TotalScoreText = Cast<UTextBlock>(MainMenuWidgetInstance->GetWidgetFromName("TotalScoreText")))
			{
				if (UNBC_GameInstance* NBCGameInstance = Cast<UNBC_GameInstance>(UGameplayStatics::GetGameInstance(this)))
				{
					TotalScoreText->SetText(FText::FromString(
						FString::Printf(TEXT("Total Score: %d"), NBCGameInstance->TotalScore)
					));
				}
			}
		}
	}

	SetPause(true);
}

// 게임 HUD 표시
void ANBCPlayerController::ShowGameHUD()
{
	// HUD가 켜져 있다면 닫기
	if (HUDWidgetInstance)
	{
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	// 이미 메뉴가 떠 있으면 제거
	if (MainMenuWidgetInstance)
	{
		MainMenuWidgetInstance->RemoveFromParent();
		MainMenuWidgetInstance = nullptr;
	}

	if (HUDWidgetClass)
	{
		HUDWidgetInstance = CreateWidget<UUserWidget>(this, HUDWidgetClass);
		if (HUDWidgetInstance)
		{
			HUDWidgetInstance->AddToViewport();

			bShowMouseCursor = false;
			SetInputMode(FInputModeGameOnly());

			ANBC_GameState* NBCGameState = GetWorld() ? GetWorld()->GetGameState<ANBC_GameState>() : nullptr;
			if (NBCGameState)
			{
				NBCGameState->UpdateHUD();
			}
		}
	}
}

// 게임 시작 - BasicLevel 오픈, GameInstance 데이터 리셋
void ANBCPlayerController::StartGame()
{
	if (UNBC_GameInstance* NBCGameInstance = Cast<UNBC_GameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		NBCGameInstance->bIsFirstStart = true;
		NBCGameInstance->CurrentLevelIndex = 0;
		NBCGameInstance->TotalScore = 0;
	}

	UGameplayStatics::OpenLevel(GetWorld(), FName("BasicLevel"));
	bIsRestartMenu = false;
	SetPause(false);
}

void ANBCPlayerController::HandleExitOrMenu()
{
	if (bIsRestartMenu)
	{
		ShowMainMenu(false);
		bIsRestartMenu = false;
	}
	else
	{
		ExitGame();
	}
}

void ANBCPlayerController::ExitGame()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), GetWorld()->GetFirstPlayerController(), EQuitPreference::Quit, false);
}