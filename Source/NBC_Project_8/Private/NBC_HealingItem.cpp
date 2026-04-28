// Fill out your copyright notice in the Description page of Project Settings.

#include "NBC_HealingItem.h"
#include "NBC_Character.h"

ANBC_HealingItem::ANBC_HealingItem()
{
	HealAmount = 20.0f;
	ItemType = "Healing";
}

void ANBC_HealingItem::ActivateItem(AActor* Activator)
{
    Super::ActivateItem(Activator);

    if (Activator && Activator->ActorHasTag("Player"))
    {
        // 회복 디버그 메시지
        //GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("Player gained %d HP!"), HealAmount));

        if (ANBC_Character* PlayerCharacter = Cast<ANBC_Character>(Activator))
        {
            // 캐릭터의 체력을 회복
            PlayerCharacter->AddHealth(HealAmount);
        }

        DestroyItem();
    }
}