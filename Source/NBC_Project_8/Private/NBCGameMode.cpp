// Fill out your copyright notice in the Description page of Project Settings.


#include "NBCGameMode.h"
#include "NBC_Character.h"
#include "NBCPlayerController.h"

ANBCGameMode::ANBCGameMode()
{
	DefaultPawnClass = ANBC_Character::StaticClass();
	PlayerControllerClass = ANBCPlayerController::StaticClass();
}