// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Dawn.h"
#include "GameFramework/GameModeBase.h"
#include "DawnGameMode.generated.h"

/**
 * 
 */
UCLASS()
class DAWN_API ADawnGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADawnGameMode();
	
	virtual void PostLogin(APlayerController* NewPlayer) override;
};
