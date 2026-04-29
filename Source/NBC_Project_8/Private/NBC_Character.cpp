// Fill out your copyright notice in the Description page of Project Settings.
#include "NBC_Character.h"
#include "NBCPlayerController.h"
#include "NBC_GameState.h"
#include "NBC_GameInstance.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h" // 프로그레스 바 헤더 포함

// Sets default values
ANBC_Character::ANBC_Character()
{
	// Tick 함수는 우선 꺼둡니다.
	PrimaryActorTick.bCanEverTick = false;

	// (1) 스프링 암 생성
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	// 스프링 암을 루트 컴포넌트 (CapsuleComponent)에 부착
	SpringArmComp->SetupAttachment(RootComponent);
	// 캐릭터와 카메라 사이의 거리 기본값 300으로 설정
	SpringArmComp->TargetArmLength = 300.0f;
	// 컨트롤러 회전에 따라 스프링 암도 회전하도록 설정
	SpringArmComp->bUsePawnControlRotation = true;

	// (2) 카메라 컴포넌트 생성
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	// 스프링 암의 소켓 위치에 카메라를 부착
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	// 카메라는 스프링 암의 회전을 따르므로 PawnControlRotation은 꺼둠
	CameraComp->bUsePawnControlRotation = false;

	// 위젯 컴포넌트
	OverheadWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("OverheadWidget"));
	OverheadWidget->SetupAttachment(GetMesh());
	OverheadWidget->SetWidgetSpace(EWidgetSpace::Screen);

	NormalSpeed = 600.0f;
	SprintSpeedMultiplier = 1.5f;
	SprintSpeed = NormalSpeed * SprintSpeedMultiplier;

	GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;

	// 초기 체력 설정
	MaxHealth = 100.0f;
	Health = MaxHealth;

	TargetPercent = 1.0f;
	CurrentPercent = 1.0f;
	LerpSpeed = 5.0f;
}
void ANBC_Character::BeginPlay()
{
	Super::BeginPlay();

	// GameInstance에서 저장된 체력 불러오기
	if (UNBC_GameInstance* NBCGameInstance = Cast<UNBC_GameInstance>(GetGameInstance()))
	{
		if (!NBCGameInstance->bIsFirstStart)
		{
			Health = NBCGameInstance->CurrentPlayerHealth;
		}
		else
		{
			Health = MaxHealth;
		}
	}

	UpdateOverheadHP();
}

void ANBC_Character::ApplySlow(float InSlowMultiplier, float Duration)
{
	if (!GetCharacterMovement()) return;

	// 기존 슬로우 타이머 제거 (슬로우 갱신용)
	GetWorldTimerManager().ClearTimer(SlowTimerHandle);

	bIsSlowed = true;

	GetCharacterMovement()->MaxWalkSpeed = NormalSpeed * InSlowMultiplier;

	GetWorldTimerManager().SetTimer(
		SlowTimerHandle,
		this,
		&ANBC_Character::ResetSpeed,
		Duration,
		false
	);
}

void ANBC_Character::ResetSpeed()
{
	if (!GetCharacterMovement()) return;

	bIsSlowed = false;

	GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
}

void ANBC_Character::ApplyReverseControl(float Duration)
{
	bReverseControl = true;

	GetWorldTimerManager().ClearTimer(ReverseControlTimerHandle);

	GetWorldTimerManager().SetTimer(
		ReverseControlTimerHandle,
		this,
		&ANBC_Character::ResetReverseControl,
		Duration,
		false
	);
}

void ANBC_Character::ResetReverseControl()
{
	bReverseControl = false;
}

float ANBC_Character::GetSlowRemainingTime() const
{
	return GetWorldTimerManager().GetTimerRemaining(SlowTimerHandle);
}

float ANBC_Character::GetReverseRemainingTime() const
{
	return GetWorldTimerManager().GetTimerRemaining(ReverseControlTimerHandle);
}

FString ANBC_Character::GetDebuffText() const
{
	FString Result;

	float SlowTime = GetWorldTimerManager().GetTimerRemaining(SlowTimerHandle);
	if (SlowTime > 0.f)
	{
		Result += FString::Printf(
			TEXT("<Slow>Slow : %.1fs</>\n"),
			SlowTime
		);
	}

	float ReverseTime = GetWorldTimerManager().GetTimerRemaining(ReverseControlTimerHandle);
	if (ReverseTime > 0.f)
	{
		Result += FString::Printf(
			TEXT("<ReverseControl>ReverseControl : %.1fs</>\n"),
			ReverseTime
		);
	}

	return Result;
}

void ANBC_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Enhanced InputComponent로 캐스팅
	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// IA를 가져오기 위해 현재 소유 중인 Controller를 ASpartaPlayerController로 캐스팅
		if (ANBCPlayerController* PlayerController = Cast<ANBCPlayerController>(GetController()))
		{
			if (PlayerController->MoveAction)
			{
				// IA_Move 액션 키를 "키를 누르고 있는 동안" Move() 호출
				EnhancedInput->BindAction(
					PlayerController->MoveAction,
					ETriggerEvent::Triggered,
					this,
					&ANBC_Character::Move
				);
			}

			if (PlayerController->JumpAction)
			{
				// IA_Jump 액션 키를 "키를 누르고 있는 동안" StartJump() 호출
				EnhancedInput->BindAction(
					PlayerController->JumpAction,
					ETriggerEvent::Triggered,
					this,
					&ANBC_Character::StartJump
				);

				// IA_Jump 액션 키에서 "손을 뗀 순간" StopJump() 호출
				EnhancedInput->BindAction(
					PlayerController->JumpAction,
					ETriggerEvent::Completed,
					this,
					&ANBC_Character::StopJump
				);
			}

			if (PlayerController->LookAction)
			{
				// IA_Look 액션 마우스가 "움직일 때" Look() 호출
				EnhancedInput->BindAction(
					PlayerController->LookAction,
					ETriggerEvent::Triggered,
					this,
					&ANBC_Character::Look
				);
			}

			if (PlayerController->SprintAction)
			{
				// IA_Sprint 액션 키를 "누르고 있는 동안" StartSprint() 호출
				EnhancedInput->BindAction(
					PlayerController->SprintAction,
					ETriggerEvent::Triggered,
					this,
					&ANBC_Character::StartSprint
				);
				// IA_Sprint 액션 키에서 "손을 뗀 순간" StopSprint() 호출
				EnhancedInput->BindAction(
					PlayerController->SprintAction,
					ETriggerEvent::Completed,
					this,
					&ANBC_Character::StopSprint
				);
			}
		}
	}
}
void ANBC_Character::Move(const FInputActionValue& value)
{
	// 컨트롤러가 있어야 방향 계산이 가능
	if (!Controller) return;

	// Value는 Axis2D로 설정된 IA_Move의 입력값 (WASD)을 담고 있음
	// 예) (X=1, Y=0) → 전진 / (X=-1, Y=0) → 후진 / (X=0, Y=1) → 오른쪽 / (X=0, Y=-1) → 왼쪽
	FVector2D MoveInput = value.Get<FVector2D>();

	//컨트롤러 반전
	if (bReverseControl)
	{
		MoveInput *= -1.f;
	}

	if (!FMath::IsNearlyZero(MoveInput.X))
	{
		// 캐릭터가 바라보는 방향(정면)으로 X축 이동
		AddMovementInput(GetActorForwardVector(), MoveInput.X);
	}

	if (!FMath::IsNearlyZero(MoveInput.Y))
	{
		// 캐릭터의 오른쪽 방향으로 Y축 이동
		AddMovementInput(GetActorRightVector(), MoveInput.Y);
	}
}

void ANBC_Character::StartJump(const FInputActionValue& value)
{
	// Jump 함수는 Character가 기본 제공
	if (value.Get<bool>())
	{
		Jump();
	}
}

void ANBC_Character::StopJump(const FInputActionValue& value)
{
	// StopJumping 함수도 Character가 기본 제공
	if (!value.Get<bool>())
	{
		StopJumping();
	}
}

void ANBC_Character::Look(const FInputActionValue& value)
{
	// 마우스의 X, Y 움직임을 2D 축으로 가져옴
	FVector2D LookInput = value.Get<FVector2D>();

	// X는 좌우 회전 (Yaw), Y는 상하 회전 (Pitch)
	// 좌우 회전
	AddControllerYawInput(LookInput.X);
	// 상하 회전
	AddControllerPitchInput(LookInput.Y);
}

void ANBC_Character::StartSprint(const FInputActionValue& value)
{
	// Shift 키를 누른 순간 이 함수가 호출된다고 가정
	// 스프린트 속도를 적용
	if (GetCharacterMovement() && !bIsSlowed)
	{
		GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
	}
}

void ANBC_Character::StopSprint(const FInputActionValue& value)
{
	// Shift 키를 뗀 순간 이 함수가 호출
	// 평상시 속도로 복귀
	if (GetCharacterMovement() && !bIsSlowed)
	{
		GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
	}
}

int32 ANBC_Character::GetHealth() const
{
	return Health;
}

int32 ANBC_Character::GetMaxtHealth() const
{
	return MaxHealth;
}



void ANBC_Character::AddHealth(float Amount)
{
	// 체력을 회복시킴. 최대 체력을 초과하지 않도록 제한함
	Health = FMath::Clamp(Health + Amount, 0.0f, MaxHealth);
	UpdateOverheadHP();
	UE_LOG(LogTemp, Log, TEXT("Health increased to: %f"), Health);
}

float ANBC_Character::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	// 기본 데미지 처리 로직 호출 (필수는 아님)
	float ActualDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	// 체력을 데미지만큼 감소시키고, 0 이하로 떨어지지 않도록 Clamp
	Health = FMath::Clamp(Health - DamageAmount, 0.0f, MaxHealth);
	UE_LOG(LogTemp, Warning, TEXT("Health decreased to: %f"), Health);
	UpdateOverheadHP();

	// 체력이 0 이하가 되면 사망 처리
	if (Health <= 0.0f)
	{
		OnDeath();
	}

	// 실제 적용된 데미지를 반환
	return ActualDamage;
}

void ANBC_Character::UpdateOverheadHP()
{
	if (!OverheadWidget) return;

	UUserWidget* OverheadWidgetInstance = OverheadWidget->GetUserWidgetObject();
	if (!OverheadWidgetInstance) return;

	if (UTextBlock* HPText = Cast<UTextBlock>(OverheadWidgetInstance->GetWidgetFromName(TEXT("OverHeadHP"))))
	{
		HPText->SetText(FText::FromString(FString::Printf(TEXT("%.0f / %.0f"), Health, MaxHealth)));
	}

	TargetPercent = Health / MaxHealth;

	if (!GetWorldTimerManager().IsTimerActive(HPBarTimerHandle))
	{
		GetWorldTimerManager().SetTimer(HPBarTimerHandle, this, &ANBC_Character::HandleHPBarLerp, 0.01f, true);
	}
}

void ANBC_Character::HandleHPBarLerp()
{
	CurrentPercent = FMath::FInterpTo(CurrentPercent, TargetPercent, 0.01f, LerpSpeed);

	UUserWidget* WidgetInst = OverheadWidget->GetUserWidgetObject();
	if (WidgetInst)
	{
		if (UProgressBar* HPBar = Cast<UProgressBar>(WidgetInst->GetWidgetFromName(TEXT("HPBar"))))
		{
			HPBar->SetPercent(CurrentPercent);
		}
	}

	// 목표치에 거의 도달했다면 타이머 종료
	if (FMath::IsNearlyEqual(CurrentPercent, TargetPercent, 0.001f))
	{
		CurrentPercent = TargetPercent; // 값 보정
		GetWorldTimerManager().ClearTimer(HPBarTimerHandle);
		UE_LOG(LogTemp, Log, TEXT("HP Bar Timer Stopped."));
	}
}

void ANBC_Character::OnDeath()
{
	UE_LOG(LogTemp, Error, TEXT("Character is Dead!"));

	// 사망 후 로직
	ANBC_GameState* NBCGameState = GetWorld() ? GetWorld()->GetGameState<ANBC_GameState>() : nullptr;
	if (NBCGameState)
	{
		NBCGameState->OnGameOver();
	}
}

