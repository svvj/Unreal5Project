// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Dawn.h"
#include "GameFramework/Pawn.h"
#include "DawnPawn.generated.h"

UCLASS()
class DAWN_API ADawnPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADawnPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;
	virtual void PossessedBy(AController* NewController) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
