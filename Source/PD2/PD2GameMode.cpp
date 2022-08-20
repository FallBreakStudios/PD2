// Copyright Epic Games, Inc. All Rights Reserved.

#include "PD2GameMode.h"
#include "PD2Character.h"
#include "UObject/ConstructorHelpers.h"

APD2GameMode::APD2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
