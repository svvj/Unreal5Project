// Fill out your copyright notice in the Description page of Project Settings.


#include "Dawn/Character/DCCharacterBase.h"
#include "Dawn/DCPlayerController.h"

// Sets default values
ADCCharacterBase::ADCCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADCCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
	// Initialize player controller and check it is ok
	DCPlayerController = Cast<ADCPlayerController>(GetController());
	DCCHECK(nullptr != DCPlayerController);

}

// Called every frame
void ADCCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called after initializing components
void ADCCharacterBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();

}

// Called to bind functionality to input
void ADCCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

