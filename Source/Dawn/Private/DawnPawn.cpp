// Fill out your copyright notice in the Description page of Project Settings.


#include "DawnPawn.h"

// Sets default values
ADawnPawn::ADawnPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADawnPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADawnPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// When the pawn and player controller are created
void ADawnPawn::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	DLOG_S(Warning);
}

// Point of view possessed by the player controller
void ADawnPawn::PossessedBy(AController* NewController)
{
	DLOG_S(Warning);
	Super::PossessedBy(NewController);
}

// Called to bind functionality to input
void ADawnPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

