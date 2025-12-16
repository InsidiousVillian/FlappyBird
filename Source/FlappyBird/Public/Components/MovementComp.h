// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovementComp.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FLAPPYBIRD_API UMovementComp : public UActorComponent
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, Category = "Checks")
	bool bIsFlying { true };
	
	UPROPERTY(VisibleAnywhere, Category = "Checks")
	bool bIsFalling { false };

public:	
	// Sets default values for this component's properties
	UMovementComp();
	
	UPROPERTY(EditAnywhere, Category = "Movement")
	float FlapStrength { 500.0f};
	
	UPROPERTY(EditAnywhere, Category = "Movement")
	float Speed {200.0f};
	
	UPROPERTY(EditAnywhere, Category = "Movement")
	float FallSpeed { 100.0f};

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, Category = "Checks")
	bool bCanMove { true };
	
	UPROPERTY(VisibleAnywhere, Category = "Checks")
	bool bIsAlive { true };
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
