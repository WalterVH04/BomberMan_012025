// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueConcreto.h"

// Sets default values
ABloqueConcreto::ABloqueConcreto()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	MallaBloqueConcreto = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloqueConcreto"));

	MallaBloqueConcreto->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloqueConcreto(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe_180.Shape_Pipe_180'"));

	if (ObjetoMallaBloqueConcreto.Succeeded())
	{
		MallaBloqueConcreto->SetStaticMesh(ObjetoMallaBloqueConcreto.Object);

		MallaBloqueConcreto->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

	FloatSpeed = 4.0f;
	RotationSpeed = 10.0f;//3.0f

	//BCPuedeMoverse = FMath::RandBool()



}

// Called when the game starts or when spawned
void ABloqueConcreto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (BCPuedeMoverse)
	{
		FVector NewLocation = GetActorLocation();
		FRotator NewRotation = GetActorRotation();
		float RunningTime = GetGameTimeSinceCreation();

		// Aleatoriedad en el desplazamiento en el eje Y
		float DeltaY = FMath::FRandRange(-1.0f, 4.0f) * FloatSpeed * DeltaTime;
		NewLocation.Y += DeltaY;

		// Aleatoriedad en la rotación
		float DeltaRotation = FMath::FRandRange(-1.0f, 1.0f) * RotationSpeed * DeltaTime;
		NewRotation.Yaw += DeltaRotation;

		SetActorLocationAndRotation(NewLocation, NewRotation);
	}
}


