// Copyright Epic Games, Inc. All Rights Reserved.

#include "PrototypeTPS_TDGameMode.h"
#include "PrototypeTPS_TDCharacter.h"
#include "UObject/ConstructorHelpers.h"

APrototypeTPS_TDGameMode::APrototypeTPS_TDGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
