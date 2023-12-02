// Copyright Epic Games, Inc. All Rights Reserved.

#include "first736GameMode.h"
#include "first736Character.h"
#include "UObject/ConstructorHelpers.h"

Afirst736GameMode::Afirst736GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
