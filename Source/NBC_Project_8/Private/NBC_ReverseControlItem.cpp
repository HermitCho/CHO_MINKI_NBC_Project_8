#include "NBC_ReverseControlItem.h"
#include "TimerManager.h"
#include "NBC_Character.h"

ANBC_ReverseControlItem::ANBC_ReverseControlItem()
{
	ItemType = "ReverseControlItem";
}

void ANBC_ReverseControlItem::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);

	ANBC_Character* Player = Cast<ANBC_Character>(Activator);
	if (!Player) return;

	Player->ApplyReverseControl(ReverseDuration);

	DestroyItem();
}

void ANBC_ReverseControlItem::ResetControl(AActor* Activator)
{
	ANBC_Character* Player = Cast<ANBC_Character>(Activator);
	if (!Player) return;

	Player->ResetReverseControl();
}