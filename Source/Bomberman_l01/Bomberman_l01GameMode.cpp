// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bomberman_l01GameMode.h"
#include "Bomberman_l01Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueAgua.h"
#include "BloqueVidrio.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"
#include "BloqueConcreto.h"
#include "BloqueElectrico.h"
#include "BloqueArena.h"
#include "BloqueBurbuja.h"
#include "BloqueOro.h"
#include "Kismet/GameplayStatics.h"
#include "Bomba.h"
#include "Engine/World.h"
#include "Plataforma.h"

ABomberman_l01GameMode::ABomberman_l01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	//if (aEspaciosVaciosBordes.Num() > 0 && MiClaseDePersonaje)
	//{
	//	int32 indiceAleatorio = FMath::RandRange(0, aEspaciosVaciosBordes.Num() - 1);
	//	FVector posicionInicial = aEspaciosVaciosBordes[indiceAleatorio];

	//	// Spawn del personaje

	//	FActorSpawnParameters spawnParams;
	//	APawn* personaje = GetWorld()->SpawnActor<APawn>(MiClaseDePersonaje, posicionInicial, FRotator::ZeroRotator, spawnParams);

	//	// Asignar control
	//	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	//	if (PC && personaje)
	//	{
	//		PC->Possess(personaje);
	//	}
	//}
	//int32 filaInicial = 0;  // O cualquier fila de borde que elijas
	//int32 columnaInicial = 0;  // O cualquier columna de borde que elijas

	//FVector posicionInicial = FVector(XInicial + columnaInicial * AnchoBloque, YInicial + filaInicial * LargoBloque, 20.0f);
	//APeonExamen* Peon = GetWorld()->SpawnActor<APeonExamen>(APeonExamen::StaticClass(), posicionInicial, FRotator::ZeroRotator);	GetWorld()->GetTimerManager().SetTimer(TemporizadorInicial, this, &ABomberMan_012025GameMode::IniciarDesaparicionBloquesMadera, 10.0f, false);

}
void ABomberman_l01GameMode::BeginPlay()
{
	Super::BeginPlay();

	FVector SpawnLocation (-399.751f, 0.0f, 0.0f);
	APlataforma* Plataforma = GetWorld()->SpawnActor<APlataforma>(APlataforma::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	//SpawnBombaEnEspacioVacio();
	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Bloque Spawning"));
	aMapaBloques.SetNum(50);
	for (int32 i = 0; i < 50; i++) {
		aMapaBloques[i].SetNum(50);
	}
	for (int32 fila = 0; fila < 50; ++fila)
	{
		for (int32 columna = 0; columna < 50; ++columna)
		{
			if (fila == 0 || fila == 49 || columna == 0 || columna == 49) // Bordes del mapa
			{
				FVector posicionBloque = FVector(
					XInicial + columna * AnchoBloque,
					YInicial + fila * LargoBloque,
					20.0f);
				SpawnBloque(posicionBloque, 1); // Tipo 1 = BloqueAcero
				aMapaBloques[fila][columna] = 1;
			}
		}
	}
	for (int32 tipo = 1; tipo <= 10; ++tipo)
	{
		int32 fila = FMath::RandRange(0, 60);
		int32 columna = FMath::RandRange(0, 50);

		// Si ya hay un bloque distinto de 0, busca otra posici�n
		while (aMapaBloques[fila][columna] != 0)
		{
			fila = FMath::RandRange(0, 60);
			columna = FMath::RandRange(0, 60);
		}

		aMapaBloques[fila][columna] = tipo;
	}
	for (int32 i = 1; i <= 200; ++i)
	{

		int32 fila = FMath::RandRange(1, 59);
		int32 columna = FMath::RandRange(1, 59);
		int32 tipo = FMath::RandRange(2, 10); // Genera un n�mero aleatorio entre 1 y 10

		// Si ya hay un bloque distinto de 0, busca otra posici�n
		while (aMapaBloques[fila][columna] != 0)
		{
			fila = FMath::RandRange(0, 60);
			columna = FMath::RandRange(0, 60);
		}

		aMapaBloques[fila][columna] = tipo;
		FVector posicionBloque = FVector(
			XInicial + columna * AnchoBloque,
			YInicial + fila * LargoBloque,
			20.0f);
		SpawnBloque(posicionBloque, tipo);

	}


	/*for (int32 i = 0; i < 30; i++)
	{
		for (int32 j = 0; j < 30; j++)
		{
			if (aMapaBloques[i][j] == 0)
			{
				int32 elemento = FMath::RandRange(0, 10); // 0 = vac�o
				aMapaBloques[i][j] = elemento;
			}
		}
	}*/
	// Recorremos la matriz para generar los bloques
	for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
	{
		for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
		{

			int32 valor = aMapaBloques[fila][columna];
			// Calculamos la posici�n del bloque

			FVector posicionBloque = FVector(
				XInicial + columna * AnchoBloque,
				YInicial + fila * LargoBloque,
				20.0f); // Z queda en 0 (altura del bloque)
			if (valor != 0) // Si no es espacio vac�o
			{
				// Llamamos a la funci�n para generar un bloque
				SpawnBloque(posicionBloque, valor);
			}
			else {
				aEspaciosVacios.Add(posicionBloque);
				if (fila == 0 || fila == 24 || columna == 0 || columna == 49) {
					aEspaciosVaciosBordes.Add(posicionBloque);
				}
			}

		}
	}

	if (aEspaciosVaciosBordes.Num() > 0 && MiClaseDePersonaje)
	{
	int32 indiceAleatorio = FMath::RandRange(0, aEspaciosVaciosBordes.Num() - 1);
	FVector posicionInicial = aEspaciosVaciosBordes[indiceAleatorio];

		// Spawn del personaje

		FActorSpawnParameters spawnParams;
		APawn* personaje = GetWorld()->SpawnActor<APawn>(MiClaseDePersonaje, posicionInicial, FRotator::ZeroRotator, spawnParams);

		// Asignar control
		APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		if (PC && personaje)
		{
			PC->Possess(personaje);
		}
	}
	int32 filaInicial = 0;  // O cualquier fila de borde que elijas
	int32 columnaInicial = 0;  // O cualquier columna de borde que elijas

	//FVector posicionInicial = FVector(XInicial + columnaInicial * AnchoBloque, YInicial + filaInicial * LargoBloque, 20.0f);
	//APeonExamen* Peon = GetWorld()->SpawnActor<APeonExamen>(APeonExamen::StaticClass(), posicionInicial, FRotator::ZeroRotator);	GetWorld()->GetTimerManager().SetTimer(TemporizadorInicial, this, &ABomberMan_012025GameMode::IniciarDesaparicionBloquesMadera, 10.0f, false);

}

//void ABomberman_l01GameMode::IniciarDesaparicionBloquesMadera()
//{
//	if (aBloques.Num() > 0)
//	{
//		GetWorld()->GetTimerManager().SetTimer(tHDestruirBloques, this, &ABomberman_l01GameMode::DestruirBloque, 5.0f, true);
//
//	}
//}

void ABomberman_l01GameMode::SpawnPersonaje()
{

}
//void ABomberman_l01GameMode::SpawnPersonajeCercaDeBloqueMadera()
//{
//	TArray<FVector> EspaciosCercanos;
//
//	// Recorremos los bloques para encontrar los de tipo BloqueMadera
//	for (ABloque* Bloque : aBloques)
//	{
//		if (ABloqueMadera* BloqueMadera = Cast<ABloqueMadera>(Bloque))
//		{
//			FVector PosicionBloque = BloqueMadera->GetActorLocation();
//
//			// Calculamos las posiciones adyacentes
//			TArray<FVector> PosicionesAdyacentes = {
//				PosicionBloque + FVector(AnchoBloque, 0, 0),  // Derecha
//				PosicionBloque - FVector(AnchoBloque, 0, 0),  // Izquierda
//				PosicionBloque + FVector(0, LargoBloque, 0),  // Arriba
//				PosicionBloque - FVector(0, LargoBloque, 0)   // Abajo
//			};
//
//			// Verificamos si las posiciones adyacentes est�n en la lista de espacios vac�os
//			for (const FVector& Posicion : PosicionesAdyacentes)
//			{
//				if (aEspaciosVacios.Contains(Posicion))
//				{
//					EspaciosCercanos.Add(Posicion);
//				}
//			}
//		}
//	}
//
//	// Si encontramos espacios vac�os cercanos, seleccionamos uno aleatoriamente
//	if (EspaciosCercanos.Num() > 0 && MiClaseDePersonaje)
//	{
//		int32 IndiceAleatorio = FMath::RandRange(0, EspaciosCercanos.Num() - 1);
//		FVector PosicionInicial = EspaciosCercanos[IndiceAleatorio];
//
//		// Spawneamos el personaje
//		FActorSpawnParameters SpawnParams;
//		APawn* Personaje = GetWorld()->SpawnActor<APawn>(MiClaseDePersonaje, PosicionInicial, FRotator::ZeroRotator, SpawnParams);
//
//		// Asignamos el control al jugador
//		APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
//		if (PC && Personaje)
//		{
//			PC->Possess(Personaje);
//		}
//	}
//}

//void ABomberman_l01GameMode::SpawnPersonajeCercaDeBloqueMadera()
//{
//	TArray<FVector> EspaciosCercanos;
//
//	// Recorremos los bloques para encontrar los de tipo BloqueMadera
//	for (ABloque* Bloque : aBloques)
//	{
//		if (ABloqueMadera* BloqueMadera = Cast<ABloqueMadera>(Bloque))
//		{
//			FVector PosicionBloque = BloqueMadera->GetActorLocation();
//
//			// Calculamos las posiciones adyacentes
//			TArray<FVector> PosicionesAdyacentes = {
//				PosicionBloque + FVector(AnchoBloque, 0, 0),  // Derecha
//				PosicionBloque - FVector(AnchoBloque, 0, 0),  // Izquierda
//				PosicionBloque + FVector(0, LargoBloque, 0),  // Arriba
//				PosicionBloque - FVector(0, LargoBloque, 0)   // Abajo
//			};
//
//			// Verificamos si las posiciones adyacentes est�n en la lista de espacios vac�os
//			for (const FVector& Posicion : PosicionesAdyacentes)
//			{
//				if (aEspaciosVacios.Contains(Posicion))
//				{
//					EspaciosCercanos.Add(Posicion);
//				}
//			}
//		}
//	}
//
//	// Si encontramos espacios vac�os cercanos, seleccionamos uno aleatoriamente
//	if (EspaciosCercanos.Num() > 0 && MiClaseDePersonaje)
//	{
//		int32 IndiceAleatorio = FMath::RandRange(0, EspaciosCercanos.Num() - 1);
//		FVector PosicionInicial = EspaciosCercanos[IndiceAleatorio];
//
//		// Spawneamos el personaje
//		FActorSpawnParameters SpawnParams;
//		APawn* Personaje = GetWorld()->SpawnActor<APawn>(MiClaseDePersonaje, PosicionInicial, FRotator::ZeroRotator, SpawnParams);
//
//		// Asignamos el control al jugador
//		APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
//		if (PC && Personaje)
//		{
//			PC->Possess(Personaje);
//		}
//	}
//}


/*/void ABomberMan_012025GameMode::MoverBloques()
{
	int32 cantidadMovibles = 0;
	while (cantidadMovibles < 4 && aBloques.Num() > 0)
	{
		int32 indice = FMath::RandRange(0, aBloques.Num() - 1);
		if (aBloques[indice])
		{
			aBloques[indice]->bPuedeMoverse = true;
			cantidadMovibles++;
			aBloques.RemoveAt(indice); // Evita duplicados
		}
	}
}*/

void ABomberman_l01GameMode::SpawnBloque(FVector posicionBloque, int32 tipoBloque)
{    
	float DistanciaMinimaX = 150.0f; // 100 * 1.5
    float DistanciaMinimaY = 150.0f; // 100 * 1.5
    // Verificar que no haya bloques cercanos dentro de la distancia m�nima
    bool bEspacioValido = true;
	for (ABloque* BloqueExistente : aBloques)
	{
		if (BloqueExistente)
		{
			FVector PosicionExistente = BloqueExistente->GetActorLocation();
			if (FMath::Abs(PosicionExistente.X - posicionBloque.X) < DistanciaMinimaX &&
				FMath::Abs(PosicionExistente.Y - posicionBloque.Y) < DistanciaMinimaY)
			{
				bEspacioValido = false;
				break;
			}
		}
	}
	if (bEspacioValido)
	{
		ABloque* BloqueGenerado = nullptr;
		int32 fila = (posicionBloque.Y - YInicial) / LargoBloque;
		int32 columna = (posicionBloque.X - XInicial) / AnchoBloque;
		switch (tipoBloque)
		{
		case 1: BloqueGenerado = GetWorld()->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
			break;
		case 2: BloqueGenerado = GetWorld()->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
			break;
		case 3: BloqueGenerado = GetWorld()->SpawnActor<ABloqueAgua>(ABloqueAgua::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
			break;
		case 4: BloqueGenerado = GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
			break;
		case 5: BloqueGenerado = GetWorld()->SpawnActor<ABloqueBurbuja>(ABloqueBurbuja::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
			break;
		case 6: BloqueGenerado = GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
			break;
		case 7: BloqueGenerado = GetWorld()->SpawnActor<ABloqueElectrico>(ABloqueElectrico::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
			break;
		case 8: BloqueGenerado = GetWorld()->SpawnActor<ABloqueOro>(ABloqueOro::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
			break;
		case 9: BloqueGenerado = GetWorld()->SpawnActor<ABloqueVidrio>(ABloqueVidrio::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
			break;
		case 10: BloqueGenerado = GetWorld()->SpawnActor<ABloqueArena>(ABloqueArena::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
			break;
		default:
			break;
		}
		if (BloqueGenerado)
		{
			aBloques.Add(BloqueGenerado);
		}
	}
}

//void ABomberman_l01GameMode::DestruirBloque()
//{
//	int numeroBloques = aBloques.Num();
//	int NumeroAleatorio = FMath::RandRange(0, numeroBloques);
//
//	if (aBloques.Num() > 0)
//	{
//		BloqueActual = aBloques[NumeroAleatorio]; // Obt�n el primer bloque
//		if (BloqueActual)
//		{
//			BloqueActual->Destroy(); // Destruye el bloque
//			GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Bloque Eliminado"));
//
//
//			// Realiza operaciones con el bloque
//			//primerBloque->SetActorLocation(FVector(100.0f, 100.0f, 100.0f));
//		}
//	}
//	else
//	{
//		// Cuando se destruyen todos, detenemos el timer
//		GetWorld()->GetTimerManager().ClearTimer(tHDestruirBloques);
//	}
//}
//void ABomberman_l01GameMode::SpawnBombaEnEspacioVacio()
//{
//	if (aEspaciosVacios.Num() > 0)
//	{
//		// Seleccionar un espacio vac�o aleatorio
//		int32 IndiceAleatorio = FMath::RandRange(0, aEspaciosVacios.Num() - 1);
//		FVector PosicionBomba = aEspaciosVacios[IndiceAleatorio];
//
//		// Spawnear la bomba
//		FActorSpawnParameters SpawnParams;
//		ABomba* Bomba = GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass(), PosicionBomba, FRotator::ZeroRotator, SpawnParams);
//		
//
//		if (Bomba)
//		{
//			// Configurar la explosi�n para que llame a ManejarExplosion
//			Bomba->OnExplota.AddDynamic(this, &ABomberman_l01GameMode::ManejarExplosion);
//		}
//	}
//	for (int32 i = 1; i < 2; ++i)
//	{
//		if (aEspaciosVacios.Num() > 0)
//		{
//			int32 IndiceAleatorio = FMath::RandRange(0, aEspaciosVacios.Num() - 1);
//			FVector PosicionNuevaBomba = aEspaciosVacios[IndiceAleatorio];
//
//			// Spawnear la nueva bomba
//			FActorSpawnParameters SpawnParams;
//			ABomba* NuevaBomba = GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass(), PosicionNuevaBomba, FRotator::ZeroRotator, SpawnParams);
//
//			if (NuevaBomba)
//			{
//				// Configurar la explosi�n para que llame a ManejarExplosion
//				NuevaBomba->OnExplota.AddDynamic(this, &ABomberman_l01GameMode::ManejarExplosion);
//			}
//		}
//	}
//}
//void ABomberman_l01GameMode::ManejarExplosion(FVector PosicionExplosion)
//{
//	// Calcular las posiciones de los bloques en un radio de 2 bloques
//	for (int32 OffsetX = -2; OffsetX <= 2; ++OffsetX)
//	{
//		for (int32 OffsetY = -2; OffsetY <= 2; ++OffsetY)
//		{
//			FVector PosicionBloque = PosicionExplosion + FVector(OffsetX * AnchoBloque, OffsetY * LargoBloque, 0.0f);
//
//			// Buscar y destruir el bloque en esta posici�n
//			for (int32 i = 0; i < aBloques.Num(); ++i)
//			{
//				if (aBloques[i] && aBloques[i]->GetActorLocation().Equals(PosicionBloque, 1.0f))
//				{
//					aBloques[i]->Destroy();
//					aBloques.RemoveAt(i);
//					break;
//				}
//			}
//		}
//	}
	
//}
	
