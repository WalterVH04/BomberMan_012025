// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "bombermanGameMode.generated.h"

UCLASS(minimalapi)
class AbombermanGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AbombermanGameMode();

	virtual void BeginPlay() override;
};



