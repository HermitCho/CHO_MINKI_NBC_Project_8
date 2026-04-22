// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NBC_BaseItem.h"
#include "NBC_HealingItem.generated.h"

UCLASS()
class NBC_PROJECT_8_API ANBC_HealingItem : public ANBC_BaseItem
{
	GENERATED_BODY()

public:
	ANBC_HealingItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	float HealAmount;

	virtual void ActivateItem(AActor* Activator) override;
};