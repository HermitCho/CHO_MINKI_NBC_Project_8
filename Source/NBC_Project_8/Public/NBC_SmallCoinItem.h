// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NBC_CoinItem.h"
#include "NBC_SmallCoinItem.generated.h"

UCLASS()
class NBC_PROJECT_8_API ANBC_SmallCoinItem : public ANBC_CoinItem
{
	GENERATED_BODY()

public:
	ANBC_SmallCoinItem();

	virtual void ActivateItem(AActor* Activator) override;
};