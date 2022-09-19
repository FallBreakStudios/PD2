// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DinoBase.h"
#include "GameFramework/Pawn.h"
#include "Diplodicids.generated.h"

UCLASS()
class PD2_API ADiplodicids : public ADinoBase
{
	GENERATED_BODY()

public:

	//Stand on two legs?
	//

	
	// Sets default values for this pawn's properties
	ADiplodicids();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
