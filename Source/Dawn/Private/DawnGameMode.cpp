// Fill out your copyright notice in the Description page of Project Settings.


#include "DawnGameMode.h"
#include "DawnPawn.h"
#include "DawnPlayerController.h"

ADawnGameMode::ADawnGameMode()
{
	DefaultPawnClass = ADawnPawn::StaticClass();
	PlayerControllerClass = ADawnPlayerController::StaticClass();
}

// Call PostLogin function when user is loged in
void ADawnGameMode::PostLogin(APlayerController* NewPlayer)
{
	DLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	DLOG(Warning, TEXT("PostLogin End"));
}