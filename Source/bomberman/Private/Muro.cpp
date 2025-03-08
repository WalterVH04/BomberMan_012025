// Fill out your copyright notice in the Description page of Project Settings.


#include "Muro.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMuro::AMuro()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaMuro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaMuro"));

	//RootComponent = MallaMuro;

	MallaMuro->SetupAttachment(RootComponent);
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaMuroAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));//PIRAMIDE

	if (MallaMuroAsset.Succeeded())
	{
		MallaMuro->SetStaticMesh(MallaMuroAsset.Object);

		MallaMuro->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

	FloatSpeed = 8.0f;
	RotationSpeed = 8.0f;

	MPuedeMoverse = FMath::RandBool();


}

// Called when the game starts or when spawned
void AMuro::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MPuedeMoverse)
	{
		FVector NewLocation = GetActorLocation();
		FRotator NewRotation = GetActorRotation();
		float RunningTime = GetGameTimeSinceCreation();

		// Aleatoriedad en el desplazamiento en Z
		float DeltaHeight = FMath::FRandRange(-1.0f, 1.0f) * FloatSpeed;
		NewLocation.Z += DeltaHeight;

		// Aleatoriedad en la rotación
		float DeltaRotation = FMath::FRandRange(-1.0f, 1.0f) * RotationSpeed;
		NewRotation.Yaw += DeltaRotation;

		SetActorLocationAndRotation(NewLocation, NewRotation);
	}
}

