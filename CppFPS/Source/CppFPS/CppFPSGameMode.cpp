// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CppFPS.h"
#include "CppFPSGameMode.h"
#include "CppFPSHUD.h"
#include "CppFPSCharacter.h"

ACppFPSGameMode::ACppFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACppFPSHUD::StaticClass();
}
