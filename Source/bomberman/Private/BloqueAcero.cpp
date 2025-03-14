// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueAcero.h"

// Sets default values
ABloqueAcero::ABloqueAcero()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MallaBloqueAcero = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloqueAcero"));

	MallaBloqueAcero->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloqueAcero(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));


	if (ObjetoMallaBloqueAcero.Succeeded())
	{
		MallaBloqueAcero->SetStaticMesh(ObjetoMallaBloqueAcero.Object);

		MallaBloqueAcero->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	FloatSpeed = 8.0f;

	bPuedeMoverse = FMath::RandBool();
}

// Called when the game starts or when spawned
void ABloqueAcero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueAcero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bPuedeMoverse)
	{
		FVector NewLocation = GetActorLocation();
		float RunningTime = GetGameTimeSinceCreation();

		// Aleatoriedad en el desplazamiento en Z
		float DeltaHeight = FMath::FRandRange(-1.0f, 1.0f) * FloatSpeed;
		NewLocation.Z += DeltaHeight;
		
	}
}

