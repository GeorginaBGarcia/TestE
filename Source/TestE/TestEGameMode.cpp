// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestEGameMode.h"
#include "TestECharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestEGameMode::ATestEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
