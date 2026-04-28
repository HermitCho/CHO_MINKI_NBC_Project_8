// Fill out your copyright notice in the Description page of Project Settings.

#include "NBC_CoinItem.h"
#include "NBC_GameState.h"

// Sets default values
ANBC_CoinItem::ANBC_CoinItem()
{
    // 점수 기본값을 0으로 설정
    PointValue = 0;
    ItemType = "DefaultCoin";
}

void ANBC_CoinItem::ActivateItem(AActor * Activator)
{
    Super::ActivateItem(Activator);

    // 플레이어 태그 확인
    if (Activator && Activator->ActorHasTag("Player"))
    {
        // 점수 획득 디버그 메시지
        //GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("Player gained %d points!"), PointValue));

        if (UWorld* World = GetWorld())
        {
            if (ANBC_GameState* GameState = World->GetGameState<ANBC_GameState>())
            {
                GameState->AddScore(PointValue);
                GameState->OnCoinCollected();
            }
        }

        // 부모 클래스 (BaseItem)에 정의된 아이템 파괴 함수 호출
        DestroyItem();
    }
}