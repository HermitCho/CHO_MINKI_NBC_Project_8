// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NBC_Item_Interface.generated.h"

// This class does not need to be modified. 리플렉션 용
UINTERFACE(MinimalAPI)
class UNBC_Item_Interface : public UInterface
{
	GENERATED_BODY()
};

class NBC_PROJECT_8_API INBC_Item_Interface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void OnItemOverlap(AActor* OverrlapActor) = 0;
	virtual void OnItemEndOverlap(AActor* OverrlapActor) = 0;
	virtual void ActivateItem(AActor* Activator) = 0;
	virtual FName GetItemType() const = 0;
};