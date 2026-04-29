// Fill out your copyright notice in the Description page of Project Settings.

#include "NBC_MineItem.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"

ANBC_MineItem::ANBC_MineItem()
{
    ExplosionDelay = 5.0f;
    ExplosionRadius = 300.0f;
    ExplosionDamage = 30.0f;
    ItemType = "Mine";

    ExplosionCollision = CreateDefaultSubobject<USphereComponent>(TEXT("ExplosionCollision"));
    ExplosionCollision->InitSphereRadius(ExplosionRadius);
    ExplosionCollision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
    ExplosionCollision->SetupAttachment(Scene);
}

void ANBC_MineItem::ActivateItem(AActor* Activator)
{
    if (bHasExploded) return;

    Super::ActivateItem(Activator);

    // 5초 후 폭발 실행
    GetWorld()->GetTimerManager().SetTimer(
        ExplosionTimerHandle,
        this,
        &ANBC_MineItem::Explode,
        ExplosionDelay,
        false
    );

    bHasExploded = true;
}

void ANBC_MineItem::Explode()
{
    UParticleSystemComponent* Particle = nullptr;

    if (ExplosionParticle)
    {
        Particle = UGameplayStatics::SpawnEmitterAtLocation(
            GetWorld(),
            ExplosionParticle,
            GetActorLocation(),
            GetActorRotation(),
            false
        );
    }

    if (ExplosionSound)
    {
        UGameplayStatics::SpawnSoundAtLocation(
            GetWorld(),
            ExplosionSound,
            GetActorLocation()
        );
    }

    TArray<AActor*> OverlappingActors;
    ExplosionCollision->GetOverlappingActors(OverlappingActors);

    for (AActor* Actor : OverlappingActors)
    {
        if (Actor && Actor->ActorHasTag("Player"))
        {
            // 폭발 디버그 메시지
            //GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, FString::Printf(TEXT("Player damaged %d by MineItem"), ExplosionDamage));

            // 데미지를 발생시켜 Actor->TakeDamage()가 실행되도록 함
            UGameplayStatics::ApplyDamage(
                Actor,                      // 데미지를 받을 액터
                ExplosionDamage,            // 데미지 양
                nullptr,                    // 데미지를 유발한 주체 (지뢰를 설치한 캐릭터가 없으므로 nullptr)
                this,                       // 데미지를 유발한 오브젝트(지뢰)
                UDamageType::StaticClass()  // 기본 데미지 유형
            );
        }
    }

    // 지뢰 제거
    DestroyItem();

    if (Particle)
    {
        FTimerHandle DestroyParticleTimerHandle;

        // 람다 캡처 시 Particle을 TWeakObjectPtr로 변환하여 캡처합니다.
        TWeakObjectPtr<UParticleSystemComponent> WeakParticle = Particle;

        GetWorld()->GetTimerManager().SetTimer(
            DestroyParticleTimerHandle,
            [WeakParticle]() // 약포인터를 캡처
            {
                // 실행 시점에서 객체가 아직 살아있는지 확인 (레벨 전환 등으로 사라졌다면 false 반환)
                if (WeakParticle.IsValid())
                {
                    WeakParticle->DestroyComponent();
                }
            },
            2.0f,
            false
        );
    }
}