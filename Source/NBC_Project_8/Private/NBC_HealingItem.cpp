// Fill out your copyright notice in the Description page of Project Settings.

#include "NBC_HealingItem.h"

ANBC_HealingItem::ANBC_HealingItem()
{
	HealAmount = 20.0f;
	ItemType = "Healing";
}

void ANBC_HealingItem::ActivateItem(AActor* Activator)
{
	// 플레이어 캐릭터의 체력을 20만큼 회복시키는 로직 등을 구현 가능
	DestroyItem();
}