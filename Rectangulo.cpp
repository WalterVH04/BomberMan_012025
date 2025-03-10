// Fill out your copyright notice in the Description page of Project Settings.


#include "Rectangulo.h"

// Sets default values
ARectangulo::ARectangulo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	MallaRectangulo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaRectangulo"));

	MallaRectangulo->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaRectangulo(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));

	
	if (ObjetoMallaRectangulo.Succeeded())
	{
		MallaRectangulo->SetStaticMesh(ObjetoMallaRectangulo.Object);

		MallaRectangulo->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}


}

// Called when the game starts or when spawned
void ARectangulo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARectangulo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

