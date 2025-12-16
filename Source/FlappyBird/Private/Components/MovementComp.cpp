// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/MainPlayer.h"
#include "Components/MovementComp.h"

void UMovementComp::Flap()
{
	
	UE_LOG(LogTemp, Warning, TEXT("MovementComp Flap"));
	
	//TODO : Add upward force to the player character when flap is called
}

void UMovementComp::Move()
{
	UE_LOG(LogTemp, Warning, TEXT("Moving Player"));
	
	//TODO: Add forward movement on the y axis to the player character when move is called
}


// Sets default values for this component's properties
UMovementComp::UMovementComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
}


// Called when the game starts
void UMovementComp::BeginPlay()
{
	Super::BeginPlay();

	PlayerRef = Cast<ACharacter>(GetOwner());
	
}


// Called every frame
void UMovementComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

