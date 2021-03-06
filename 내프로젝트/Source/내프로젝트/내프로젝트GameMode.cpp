// Copyright Epic Games, Inc. All Rights Reserved.

#include "내프로젝트GameMode.h"
#include "내프로젝트PlayerController.h"
#include "내프로젝트Character.h"
#include "UObject/ConstructorHelpers.h"

A내프로젝트GameMode::A내프로젝트GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = A내프로젝트PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}