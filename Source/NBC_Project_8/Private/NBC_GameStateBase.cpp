// Fill out your copyright notice in the Description page of Project Settings.

#include "NBC_GameStateBase.h"

ANBC_GameStateBase::ANBC_GameStateBase()
{
    Score = 0;
}

int32 ANBC_GameStateBase::GetScore() const
{
    return Score;
}

void ANBC_GameStateBase::AddScore(int32 Amount)
{
    Score += Amount;
}