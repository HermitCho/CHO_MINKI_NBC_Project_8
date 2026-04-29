#include "NBC_SlowingItem.h"
#include "NBC_Character.h"
#include "TimerManager.h"

ANBC_SlowingItem::ANBC_SlowingItem()
{
	ItemType = "SlowingItem";
}

void ANBC_SlowingItem::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);

	ANBC_Character* Player = Cast<ANBC_Character>(Activator);
	if (!Player) return;

	Player->ApplySlow(SlowMultiplier, SlowDuration);

	DestroyItem();
}

void ANBC_SlowingItem::ResetSpeed(AActor* Activator, float OriginalSpeed)
{
	ANBC_Character* Player = Cast<ANBC_Character>(Activator);
	if (!Player) return;

	Player->ResetSpeed();
}