// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NBC_BaseItem.h"
#include "NBC_MineItem.generated.h"

UCLASS()
class NBC_PROJECT_8_API ANBC_MineItem : public ANBC_BaseItem
{
    GENERATED_BODY()

public:
    ANBC_MineItem();

    // 폭발까지 걸리는 시간 (5초)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mine")
    float ExplosionDelay;
    // 폭발 범위
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mine")
    float ExplosionRadius;
    // 폭발 데미지
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mine")
    float ExplosionDamage;

    virtual void ActivateItem(AActor* Activator) override;
};