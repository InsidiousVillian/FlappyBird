// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MainPlayer.h"

// Sets default values
AMainPlayer::AMainPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	HealthComp = CreateDefaultSubobject<UHealth>(TEXT("Health Component"));
	CollisionComp = CreateDefaultSubobject<UCollisionComponent>(TEXT("Collision Component"));
	CameraComp = CreateDefaultSubobject<UCameraComp>(TEXT("Camera Component"));
	MovementComp = CreateDefaultSubobject<UMovementComp>(TEXT("Movement Component"));
	
	SetActorLocation(FVector(0, 0, 0));
	SetActorRotation(FRotator(0, 0, 0));
}

// Called when the game starts or when spawned
void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

