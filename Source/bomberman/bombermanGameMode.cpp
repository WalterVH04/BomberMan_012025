// Copyright Epic Games, Inc. All Rights Reserved.

#include "bombermanGameMode.h"
#include "bombermanCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "Muro.h"
#include "Rectangulo.h"
#include "BloqueConcreto.h"
#include "BloqueAcero.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"

AbombermanGameMode::AbombermanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}


void AbombermanGameMode::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Bloque Spawning"));

	// Create a new Enemigo
	//ABloque* bloque01 = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(934.0f, 1370.0f, 100.0f), FRotator(0.0f, 0.0f, 0.0f));
	//ABloque* bloque02 = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(734.0f, 1370.0f, 50.0f), FRotator(0.0f, 0.0f, 0.0f));

	int numeroBloqueConMovimiento = 0;

	for (int i = 0; i < 10; i++)
	{

		ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(732.0f + i * 130, 1353.0f, 45.0f), FRotator(0.0f, 0.0f, 0.0f));//500.0f + i * 200, 2500.0f, 20.0f


		if (bloque->bPuedeMoverse)
		{
			numeroBloqueConMovimiento++;
		}

		if (numeroBloqueConMovimiento >= 2)
		{
			bloque->bPuedeMoverse = false;
		}

	}

	




	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Muro Spawning"));

	int numeroMuroConMovimiento = 0;

	for (int i = 0; i < 20; i++)
	{
		AMuro* muro = GetWorld()->SpawnActor<AMuro>(AMuro::StaticClass(), FVector(320.0f + i * 130, 357.0f, 45.0f), FRotator(0.0f, 0.0f, 0.0f));


		if (muro->MPuedeMoverse)
		{
			numeroMuroConMovimiento++;
		}

		if (numeroMuroConMovimiento >= 4)
		{
			muro->MPuedeMoverse = false;
		}



	}




	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Rectangulo Spawning"));

	//FTransform SpawnLocation;
	//GetWorld()->SpawnActor<AMyFirstRectangulo>(AMyFirstRectangulo::StaticClass(), &SpawnLocation);

	for (int i = 0; i < 1; i++) //cantidad de rectangulos
	{
		ARectangulo* Rectangulo = GetWorld()->SpawnActor<ARectangulo>(ARectangulo::StaticClass(), FVector(1228.0f , 911.0f, 46.0f), FRotator(0.0f, 0.0f, 0.0f));

		if (Rectangulo)
		{
			Rectangulo->SetLifeSpan(10.0f); // se elimina rectangulo despues de 10 segundos
		}

	}






	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("BloqueConcreto Spawning"));

	int numeroBloqueConcretoConMovimiento = 0;

	for (int i = 0; i < 2; i++)
	{
		ABloqueConcreto* bloqueconcreto = GetWorld()->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), FVector(620.0f + i * 100, 57.0f, 45.0f), FRotator(0.0f, 0.0f, 0.0f));


		if (bloqueconcreto->BCPuedeMoverse)
		{
			numeroBloqueConcretoConMovimiento++;
		}

		if (numeroBloqueConcretoConMovimiento >= 2)
		{
			bloqueconcreto->BCPuedeMoverse = false;
		}



	}



}







