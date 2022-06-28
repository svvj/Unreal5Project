// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Dawn.h"
#include "GameFramework/PlayerController.h"
#include "DCPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DAWN_API ADCPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	//
	ADCPlayerController();
	
	// Called after initializing components
	virtual void PostInitializeComponents() override;
	// Overridable native function for when this controller is asked to possess a pawn.
	virtual void OnPossess(APawn* aPawn) override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
