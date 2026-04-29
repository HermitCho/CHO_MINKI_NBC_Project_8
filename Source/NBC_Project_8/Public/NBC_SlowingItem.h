#pragma once

#include "CoreMinimal.h"
#include "NBC_BaseItem.h"
#include "NBC_SlowingItem.generated.h"

UCLASS()
class NBC_PROJECT_8_API ANBC_SlowingItem : public ANBC_BaseItem
{
	GENERATED_BODY()

public:
	ANBC_SlowingItem();

protected:
	UPROPERTY(EditAnywhere, Category = "Slow")
	float SlowMultiplier = 0.5f;

	UPROPERTY(EditAnywhere, Category = "Slow")
	float SlowDuration = 5.0f;

	virtual void ActivateItem(AActor* Activator) override;

	void ResetSpeed(AActor* Activator, float OriginalSpeed);
};