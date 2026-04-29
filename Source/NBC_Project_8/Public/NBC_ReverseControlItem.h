#pragma once

#include "CoreMinimal.h"
#include "NBC_BaseItem.h"
#include "NBC_ReverseControlItem.generated.h"

UCLASS()
class NBC_PROJECT_8_API ANBC_ReverseControlItem : public ANBC_BaseItem
{
	GENERATED_BODY()

public:
	ANBC_ReverseControlItem();

protected:
	UPROPERTY(EditAnywhere, Category = "Reverse")
	float ReverseDuration = 5.0f;

	virtual void ActivateItem(AActor* Activator) override;

	void ResetControl(AActor* Activator);
};