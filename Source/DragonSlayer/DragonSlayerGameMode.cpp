// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DragonSlayerGameMode.h"
#include "DragonSlayerCharacter.h"

ADragonSlayerGameMode::ADragonSlayerGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ADragonSlayerCharacter::StaticClass();	
}
