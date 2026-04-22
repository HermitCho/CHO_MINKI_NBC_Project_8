// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NBC_BaseItem.h"
#include "NBC_CoinItem.generated.h"

UCLASS()
class NBC_PROJECT_8_API ANBC_CoinItem : public ANBC_BaseItem
{
	GENERATED_BODY()

public:
	ANBC_CoinItem();

protected:
	// 코인 획득 시 얻을 점수 (자식 클래스에서 상속받아 값만 바꿔줄 예정)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 PointValue;
};