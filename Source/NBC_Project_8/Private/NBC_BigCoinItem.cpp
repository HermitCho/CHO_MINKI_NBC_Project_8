// Fill out your copyright notice in the Description page of Project Settings.

#include "NBC_BigCoinItem.h"

ANBC_BigCoinItem::ANBC_BigCoinItem()
{
	PointValue = 50;
	ItemType = "BigCoin";
}

void ANBC_BigCoinItem::ActivateItem(AActor* Activator)
{
	DestroyItem(); // 아이템 소멸(부모의 DestroyItem() 혹은 자체 로직)
}
