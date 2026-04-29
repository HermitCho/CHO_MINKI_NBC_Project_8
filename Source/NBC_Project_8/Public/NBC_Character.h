// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NBC_Character.generated.h"

class UWidgetComponent;
class USpringArmComponent; // 스프링 암 관련 클래스 헤더
class UCameraComponent; // 카메라 관련 클래스 전방 선언
// Enhanced Input에서 액션 값을 받을 때 사용하는 구조체
struct FInputActionValue;

UCLASS()
class NBC_PROJECT_8_API ANBC_Character : public ACharacter
{
	GENERATED_BODY()

public:
	ANBC_Character();

	// 다른 곳에서 현재 체력을 가져오는 함수
	UFUNCTION(BlueprintPure, Category = "Health")
	int32 GetHealth() const;
	// 다른 곳에서 최대 체력을 가져오는 함수
	UFUNCTION(BlueprintPure, Category = "Health")
	int32 GetMaxtHealth() const;
	// 체력을 회복시키는 함수
	UFUNCTION(BlueprintCallable, Category = "Health")
	void AddHealth(float Amount);

	//슬로우
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void ApplySlow(float SlowMultiplier, float Duration);
	//이동 속도 기본으로 초기화
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void ResetSpeed();
	//컨트롤러 반전
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void ApplyReverseControl(float Duration);
	//컨트롤러 반전 정상으로 초기화
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void ResetReverseControl();

	// 슬로우 시간 가져오기
	UFUNCTION(BlueprintPure, Category = "Debuff")
	float GetSlowRemainingTime() const;
	// 컨트롤러 반전 시간 가져오기
	UFUNCTION(BlueprintPure, Category = "Debuff")
	float GetReverseRemainingTime() const;
	// 디버프 시간 UI를 위한 Text
	UFUNCTION(BlueprintPure, Category = "Debuff")
	FString GetDebuffText() const;

protected:
	virtual void BeginPlay() override;

	// 스프링 암 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComp;
	// 카메라 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComp;
	// 위젯 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI")
	UWidgetComponent* OverheadWidget;
	// 체력바 애니메이션 속도
	UPROPERTY(EditAnywhere, Category = "UI")
	float LerpSpeed;


	// 이동 속도 관련 프로퍼티들
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float NormalSpeed; // 기본 걷기 속도
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float SprintSpeedMultiplier;  // "기본 속도" 대비 몇 배로 빠르게 달릴지 결정
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	float SprintSpeed; 	// 실제 스프린트 속도

	bool bIsSlowed = false; // 슬로우 체크
	FTimerHandle SlowTimerHandle; // 슬로우 제어 시간

	bool bReverseControl = false; // 컨트롤러 반전 체크
	FTimerHandle ReverseControlTimerHandle; // 컨트롤러 반전 제어 시간

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override; // 이 함수는 이후에 다루게 되니, 우선 삭제하기 않고 둡니다.

	// IA_Move와 IA_Jump 등을 처리할 함수 원형
	// Enhanced Input에서 액션 값은 FInputActionValue로 전달됩니다.
	UFUNCTION()
	void Move(const FInputActionValue& value);
	UFUNCTION()
	void StartJump(const FInputActionValue& value);
	UFUNCTION()
	void StopJump(const FInputActionValue& value);
	UFUNCTION()
	void Look(const FInputActionValue& value);
	UFUNCTION()
	void StartSprint(const FInputActionValue& value);
	UFUNCTION()
	void StopSprint(const FInputActionValue& value);

	// 최대 체력
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float MaxHealth;
	// 현재 체력
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Health")
	float Health;

	// 체력바 애니메이션을 위한 변수들
	float TargetPercent;
	float CurrentPercent;
	// 애니메이션을 구동할 타이머 핸들
	FTimerHandle HPBarTimerHandle;

	void OnDeath();
	void UpdateOverheadHP();
	void HandleHPBarLerp();

	// 데미지 처리 함수 - 외부로부터 데미지를 받을 때 호출됨
	// 또는 AActor의 TakeDamage()를 오버라이드
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

};
