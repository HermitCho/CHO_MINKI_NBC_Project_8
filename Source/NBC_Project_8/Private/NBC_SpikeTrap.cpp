#include "NBC_SpikeTrap.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NBC_Character.h"
#include "Kismet/GameplayStatics.h"
#include "NBC_GameState.h"

ANBC_SpikeTrap::ANBC_SpikeTrap()
{
	PrimaryActorTick.bCanEverTick = false;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Scene);

	Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	Collision->SetupAttachment(Scene);
	Collision->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	Collision->OnComponentBeginOverlap.AddDynamic(
		this,
		&ANBC_SpikeTrap::OnOverlapBegin
	);
}

void ANBC_SpikeTrap::BeginPlay()
{
	Super::BeginPlay();

	SetActorHiddenInGame(true);

	GetWorldTimerManager().SetTimer(
		TrapTimerHandle,
		this,
		&ANBC_SpikeTrap::ToggleTrap,
		InactiveTime,
		false
	);
}

void ANBC_SpikeTrap::ToggleTrap()
{
	bIsActive = !bIsActive;

	SetActorHiddenInGame(!bIsActive);

	Collision->SetCollisionEnabled(
		bIsActive
		? ECollisionEnabled::QueryOnly
		: ECollisionEnabled::NoCollision
	);

	ANBC_GameState* NBCGameState = GetWorld() ? GetWorld()->GetGameState<ANBC_GameState>() : nullptr;

	if (NBCGameState)
	{
		NBCGameState->SpikeTrapEvent();
	}

	if (ToggleTrapSound)
	{
		UGameplayStatics::SpawnSoundAtLocation(
			GetWorld(),
			ToggleTrapSound,
			GetActorLocation()
		);
	}

	float NextTime = bIsActive ? ActiveTime : InactiveTime;

	GetWorldTimerManager().SetTimer(
		TrapTimerHandle,
		this,
		&ANBC_SpikeTrap::ToggleTrap,
		NextTime,
		false
	);
}

void ANBC_SpikeTrap::OnOverlapBegin(
	UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult
)
{
	ANBC_Character* Player = Cast<ANBC_Character>(OtherActor);
	if (!Player) return;

	if (Player && Player->ActorHasTag("Player"))
	{
		UGameplayStatics::ApplyDamage(
			Player,
			Damage,
			nullptr,
			this,
			UDamageType::StaticClass()
		);
	}
}