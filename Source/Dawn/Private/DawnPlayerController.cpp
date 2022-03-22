// Fill out your copyright notice in the Description page of Project Settings.


#include "DawnPlayerController.h"

// Identify when pawn and player controller are created
void ADawnPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	DLOG_S(Warning);
}

// Point of view of on possess on a pawn
void ADawnPlayerController::OnPossess(APawn* aPawn)
{
	DLOG_S(Warning);
	Super::OnPossess(aPawn);
}