// Copyright Epic Games, Inc. All Rights Reserved.

#include "TakeAShotGameMode.h"
#include "TakeAShotCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATakeAShotGameMode::ATakeAShotGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
