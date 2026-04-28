// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NBC_FItemSpawnRow.h"       // 우리가 정의한 구조체
#include "NBC_SpawnVolume.generated.h"

class UBoxComponent;

UCLASS()
class NBC_PROJECT_8_API ANBC_SpawnVolume : public AActor
{
    GENERATED_BODY()

public:
    ANBC_SpawnVolume();

    UFUNCTION(BlueprintCallable, Category = "Spawning")
    AActor* SpawnRandomItem(); // 리턴 형식을 AActor* 로 변경

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
    USceneComponent* Scene;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
    UBoxComponent* SpawningBox;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning")
    UDataTable* ItemDataTable;

    int32 SpawnItemCount;

    FVector GetRandomPointInVolume() const;
    FNBC_FItemSpawnRow* GetRandomItem() const;
    AActor* SpawnItem(TSubclassOf<AActor> ItemClass);
};