#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NBC_SpikeTrap.generated.h"

class UBoxComponent;
class UStaticMeshComponent;

UCLASS()
class NBC_PROJECT_8_API ANBC_SpikeTrap : public AActor
{
	GENERATED_BODY()

public:
	ANBC_SpikeTrap();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	USceneComponent* Scene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	UBoxComponent* Collision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trap")
	float Damage = 20.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trap")
	float ActiveTime = 2.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trap")
	float InactiveTime = 3.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect")
	USoundBase* ToggleTrapSound;

	FTimerHandle TrapTimerHandle;
	bool bIsActive = false;


	void ToggleTrap();

	UFUNCTION()
	void OnOverlapBegin(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
};