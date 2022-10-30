// Copyright Epic Games, Inc. All Rights Reserved.

#include "IPHGameMode.h"
#include "IPHHUD.h"
#include "IPHCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIPHGameMode::AIPHGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AIPHHUD::StaticClass();
}
