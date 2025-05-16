// Fill out your copyright notice in the Description page of Project Settings.


#include "InstancedBook.h"

#include "Components/InstancedStaticMeshComponent.h"

// Sets default values
AInstancedBook::AInstancedBook()
{
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

// Dans BeginPlay
void AInstancedBook::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AInstancedBook::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInstancedBook::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if(Generate)
	{
		TestFunction();
		Generate = false;
	}
}

void AInstancedBook::TestFunction()
{
	FVector LastPointToSpawn = FVector::ZeroVector;
	AllInstancedStaticMesh.Empty();
	float BookSpacing = 0.5f; 
	for (int32 i = 0; i < AllStaticMesh.Num(); ++i)
	{
		FName Name = *FString::Printf(TEXT("InstancedMesh_%d"), i);
		UInstancedStaticMeshComponent* ISMComp = NewObject<UInstancedStaticMeshComponent>(this,Name);
		ISMComp->RegisterComponent();
		ISMComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		ISMComp->SetStaticMesh(AllStaticMesh[i]);
		AllInstancedStaticMesh.Add(ISMComp);
	}
	while (MaxDistance - LastPointToSpawn.Z>0.0f)
	{
		int32 RandIndex = FMath::RandRange(0, AllInstancedStaticMesh.Num() - 1);
		UInstancedStaticMeshComponent* RandomMesh = AllInstancedStaticMesh[RandIndex];

		FVector Location = LastPointToSpawn;

		FVector Min, Max;
		RandomMesh->GetLocalBounds(Min, Max);

		FVector LocalBounds = Min-Max;
		Location.X = LastPointToSpawn.X - (LocalBounds.X/2);

		RandomMesh->AddInstance(FTransform(FRotator::ZeroRotator, Location, FVector::OneVector));

		LastPointToSpawn.Z = LastPointToSpawn.Z - LocalBounds.Z + BookSpacing;
	}
}