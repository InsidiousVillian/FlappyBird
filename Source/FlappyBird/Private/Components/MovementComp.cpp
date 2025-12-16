// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/MainPlayer.h"
#include "Components/MovementComp.h"

void UMovementComp::Flap(float DeltaTime)
{
	
	UE_LOG(LogTemp, Warning, TEXT("MovementComp Flap"));
	
	//TODO : Add upward force to the player character when flap is called
	
	if (!OwnerActor) { return; }
	
	Velocity.Z = FlapStrength;
	
	CurrentLocation = OwnerActor->GetActorLocation();
	
	NewLocation = CurrentLocation + FVector(0,0, FlapStrength);
	
	OwnerActor->SetActorLocation(NewLocation);
	
}

void UMovementComp::Move(float DeltaTime)
{
	UE_LOG(LogTemp, Warning, TEXT("Moving Player"));
	
	//TODO: Add forward movement on the y axis to the player character when move is called
	
	if (!OwnerActor) { return; }
	
	
	CurrentLocation = OwnerActor->GetActorLocation();
	
	NewLocation = CurrentLocation + FVector(Speed * DeltaTime,0, 0);
	
	OwnerActor->SetActorLocation(NewLocation);
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
	
	OwnerActor = GetOwner();
	
}


// Called every frame
void UMovementComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	Move(DeltaTime); // Call Move function every tick
}

