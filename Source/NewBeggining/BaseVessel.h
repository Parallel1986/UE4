// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "GameFramework/Actor.h"
#include "BaseVessel.generated.h"


UCLASS()
class NEWBEGGINING_API ABaseVessel : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseVessel();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	int32 maximalSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	int32 acceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	int32 turnSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival")
	int32 health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival")
	int32 shield;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival")
	int32 armor;

	UFUNCTION(BlueprintCallable, Category = "Damage")
	void TakeDamage(int32 damage);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
