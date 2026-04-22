// Fill out your copyright notice in the Description page of Project Settings.


#include "NBC_SmallCoinItem.h"

ANBC_SmallCoinItem::ANBC_SmallCoinItem()
{
	PointValue = 10;
	ItemType = "SmallCoin";
}

void ANBC_SmallCoinItem::ActivateItem(AActor* Activator)
{
	DestroyItem();
}