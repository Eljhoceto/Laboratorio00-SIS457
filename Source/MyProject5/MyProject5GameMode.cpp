// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject5GameMode.h"
#include "MyProject5Pawn.h"

AMyProject5GameMode::AMyProject5GameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AMyProject5Pawn::StaticClass();
}
