// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Dawn/Dawn.h"
#include "GameFramework/Character.h"
#include "DCCharacterBase.generated.h"

UCLASS()
class DAWN_API ADCCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADCCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called after initializing components
	virtual void PostInitializeComponents() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	// Player Controller property
	UPROPERTY()
	class ADCPlayerController* DCPlayerController;

};
