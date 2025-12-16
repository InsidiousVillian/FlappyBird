// Fill out your copyright notice in the Description page of Project Settings.


#include "GameFramework/Character.h"
#include "Components/Health.h"
#include "Kismet/GameplayStatics.h"
#include "Obstacles/Obstacles.h"

// Sets default values
AObstacles::AObstacles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AObstacles::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("AObstacles::BeginPlay()")); 
	
	ACharacter* PlayerRef = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (PlayerRef)
	{
		HealthComponent = PlayerRef->FindComponentByClass<UHealth>();
		if (!HealthComponent)
		{
			UE_LOG(LogTemp, Warning, TEXT("Player Health Component not found!") );
		}
	}
}

// Called every frame
void AObstacles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObstacles::OnHitPlayer(ACharacter* PlayerRef)
{
	
	if (!PlayerRef) {return; }
	
		UE_LOG(LogTemp, Warning, TEXT("Player Hit Obstacle"));
	
	if (HealthComponent)
	{
		HealthComponent->TakeDamage(20.0f);
	}
	
	Destroy(); // Destroy the obstacle upon collision with the player
	
	//TODO: reduce Player Health on collision
}

