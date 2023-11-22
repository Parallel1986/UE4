// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseVessel.h"

// Sets default values
ABaseVessel::ABaseVessel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ABaseVessel::TakeDamage(int32 damage)
{

}

// Called when the game starts or when spawned
void ABaseVessel::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseVessel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

