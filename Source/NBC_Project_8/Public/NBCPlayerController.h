// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NBCPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class NBC_PROJECT_8_API ANBCPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ANBCPlayerController();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;
	// IA_Move를 지정할 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* MoveAction;
	// IA_Jump를 지정할 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* JumpAction;
	// IA_Look를 지정할 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* LookAction;
	// IA_Sprint를 지정할 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* SprintAction;

	virtual void BeginPlay() override;
};
