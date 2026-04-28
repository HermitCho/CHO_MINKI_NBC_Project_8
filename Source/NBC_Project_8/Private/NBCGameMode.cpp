// Fill out your copyright notice in the Description page of Project Settings.


#include "NBCGameMode.h"
#include "NBC_Character.h"
#include "NBCPlayerController.h"
#include "NBC_GameStateBase.h"

ANBCGameMode::ANBCGameMode()
{
	DefaultPawnClass = ANBC_Character::StaticClass();
	PlayerControllerClass = ANBCPlayerController::StaticClass();
	// 우리가 만든 GameState로 설정
	GameStateClass = ANBC_GameStateBase::StaticClass();
}