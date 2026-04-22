// Fill out your copyright notice in the Description page of Project Settings.


#include "NBC_MineItem.h"

ANBC_MineItem::ANBC_MineItem()
{
	ExplosionDelay = 5.0f;
	ExplosionRadius = 300.0f;
	ExplosionDamage = 30.0f;
	ItemType = "Mine";
}

void ANBC_MineItem::ActivateItem(AActor* Activator)
{
	DestroyItem();
}