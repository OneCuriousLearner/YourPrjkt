// Copyright Epic Games, Inc. All Rights Reserved.

#include "YourPrjktGameMode.h"
#include "YourPrjktCharacter.h"
#include "UObject/ConstructorHelpers.h"

AYourPrjktGameMode::AYourPrjktGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
