// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Dawn.h"
#include "GameFramework/PlayerController.h"
#include "DawnPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DAWN_API ADawnPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void PostInitializeComponents() override;
	virtual void OnPossess(APawn* aPawn) override;
};
