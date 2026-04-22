// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NBC_Item_Interface.h"
#include "NBC_BaseItem.generated.h"

UCLASS()
class NBC_PROJECT_8_API ANBC_BaseItem : public AActor, public INBC_Item_Interface
{
	GENERATED_BODY()

public:
	ANBC_BaseItem();

protected:
	// 아이템 유형(타입)을 편집 가능하게 지정
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FName ItemType;

	// IItemInterface에서 요구하는 함수들을 반드시 구현
	virtual void OnItemOverlap(AActor* OverlapActor) override;
	virtual void OnItemEndOverlap(AActor* OverlapActor) override;
	virtual void ActivateItem(AActor* Activator) override;
	virtual FName GetItemType() const override;

	// 아이템을 제거하는 공통 함수 (추가 이펙트나 로직을 넣을 수 있음)
	virtual void DestroyItem();
};