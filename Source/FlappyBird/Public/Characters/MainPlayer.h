// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/MovementComp.h"
#include "Components/Health.h"
#include "Components/CollisionComponent.h"
#include "Components/CameraComp.h"
#include "MainPlayer.generated.h"

UCLASS()
class FLAPPYBIRD_API AMainPlayer : public ACharacter
{
	GENERATED_BODY()
	
	UPROPERTY()
	UMovementComp* MovementComp;
	
	UPROPERTY()
	UHealth* HealthComp;
	
	UPROPERTY()
	UCollisionComponent* CollisionComp;
	
	UPROPERTY()
	UCameraComp* CameraComp;

public:
	// Sets default values for this character's properties
	AMainPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
