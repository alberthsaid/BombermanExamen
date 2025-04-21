// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/Material.h"
#include "GameFramework/Actor.h"

// Sets default values
ABloque::ABloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	MallaBloque->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BloqueMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (BloqueMesh.Succeeded())
	{
		MallaBloque->SetStaticMesh(BloqueMesh.Object);
		MallaBloque->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
		MallaBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	MallaBloque->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MallaBloque->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
	MallaBloque->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	FloatSpeed = 5.0f;
	RotationSpeed = 3.0f;

	bPuedeMoverse = FMath::RandBool();

	//DireccionMovimiento = FVector(0.0f, 0.0f, 2.0f); // Move up
	//VelocidadMovimiento = 30.0f;
	//AlturaMaxima = 300.0f;
	//AlturaMinima = 130.0f;
	//VelocidadRotacion = 200.0f;
	//RotacionInicial = FRotator(0.0f, 0.0f, 2.0f);
}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
	//RotacionInicial = GetActorRotation();

	
}

// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*PocisionInicial += DireccionMovimiento * VelocidadMovimiento * DeltaTime;
	if (PocisionInicial.Z >= AlturaMaxima)
	{
		DireccionMovimiento.Z = -3.0f;
	}
	else if (PocisionInicial.Z <= AlturaMinima)
	{
		DireccionMovimiento.Z = 4.0f;
	}
	SetActorLocation(PocisionInicial);

	RotacionInicial += FRotator(0.0f, VelocidadRotacion * DeltaTime, 0.0f);
	if (RotacionInicial.Yaw >= 360.0f)
	{
		RotacionInicial.Yaw = 0.0f;
	}
	SetActorRotation(RotacionInicial);*/
}

