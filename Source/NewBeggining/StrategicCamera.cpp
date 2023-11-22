// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategicCamera.h"

// Sets default values
AStrategicCamera::AStrategicCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	sceneComponent->SetupAttachment(RootComponent);

	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	springArm->SetupAttachment(sceneComponent);

	springArm->TargetArmLength = 1500.0f;
	springArm->bUsePawnControlRotation = false;
	

	//springArm->SetWorldRotation(FRotator(75.0f, 0.0f, 0.0f));
	//springArm->AddLocalRotation(FRotator(75.0f, 0.0f, 0.0f));
	//springArm->AddWorldRotation(FRotator(75.0f, 0.0f, 0.0f));
	springArm->SetRelativeRotation(FRotator(75.0f, 0.0f, 0.0f));

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->SetupAttachment(springArm, USpringArmComponent::SocketName);
	camera->bUsePawnControlRotation = false;

	arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	arrow->SetupAttachment(sceneComponent);
}

// Called when the game starts or when spawned
void AStrategicCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrategicCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AStrategicCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

