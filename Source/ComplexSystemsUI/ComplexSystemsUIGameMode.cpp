// Copyright Epic Games, Inc. All Rights Reserved.

#include "ComplexSystemsUIGameMode.h"
#include "ComplexSystemsUICharacter.h"
#include "UObject/ConstructorHelpers.h"

AComplexSystemsUIGameMode::AComplexSystemsUIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
