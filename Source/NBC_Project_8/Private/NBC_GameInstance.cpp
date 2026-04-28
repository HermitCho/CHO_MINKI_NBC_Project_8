// Fill out your copyright notice in the Description page of Project Settings.


#include "NBC_GameInstance.h"

UNBC_GameInstance::UNBC_GameInstance()
{
	TotalScore = 0;
	CurrentLevelIndex = 0;
	CurrentLevelDuration = 0;
}

void UNBC_GameInstance::AddToScore(int32 Amount)
{
	TotalScore += Amount;
	UE_LOG(LogTemp, Warning, TEXT("Total Score Updated: %d"), TotalScore);
}