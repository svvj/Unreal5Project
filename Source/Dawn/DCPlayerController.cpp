// Fill out your copyright notice in the Description page of Project Settings.


#include "Dawn/DCPlayerController.h"
#include "Dawn/Character/DCCharacterBase.h"

// Sets default values
ADCPlayerController::ADCPlayerController()
{

}

// Called after initializing components
void ADCPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	DCLOG_S(Warning);
}

// Overridable native function for when this controller is asked to possess a pawn.
void ADCPlayerController::OnPossess(APawn* aPawn)
{
	DCLOG_S(Warning);
	Super::OnPossess(aPawn);
}

// Called when the game starts or when spawned
void ADCPlayerController::BeginPlay()
{
	Super::BeginPlay();
}