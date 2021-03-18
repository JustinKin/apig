// Copyright Epic Games, Inc. All Rights Reserved.

#include "ApigGameMode.h"
#include "ApigHUD.h"
#include "ApigCharacter.h"
#include "UObject/ConstructorHelpers.h"

AApigGameMode::AApigGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AApigHUD::StaticClass();
}
