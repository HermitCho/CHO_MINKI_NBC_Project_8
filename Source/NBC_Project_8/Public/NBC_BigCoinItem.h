// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NBC_CoinItem.h"
#include "NBC_BigCoinItem.generated.h"

UCLASS()
class NBC_PROJECT_8_API ANBC_BigCoinItem : public ANBC_CoinItem
{
	GENERATED_BODY()

public:
	ANBC_BigCoinItem();

	virtual void ActivateItem(AActor* Activator) override;
};