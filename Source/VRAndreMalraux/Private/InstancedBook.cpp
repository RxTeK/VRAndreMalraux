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
		InitInstancedStaticMesh();
		for (const FBookPoint& BookPoint : BooksLocations)
		{
			if (BookPoint.AutoGenerate) //Auto generate on music shelf
			{
				for (FTransform TransformIndex : ShelfBookTransfrom)
				{
					GenerateLineBook(BookPoint.Location + TransformIndex.GetLocation(), BookPoint.Distance, FRotator(TransformIndex.GetRotation()));
				}
			}else //Normal generation
			{
				GenerateLineBook(BookPoint.Location, BookPoint.Distance, BookPoint.Rotation);	
			}
		}
		Generate = false;
	}
}

void AInstancedBook::GenerateLineBook(FVector InitLocation, float MaxDistance, FRotator Rotation)
{
	float CustomDistance = MaxDistance; 	
	while (CustomDistance > 0.0f)
	{
		int32 RandIndex = FMath::RandRange(0, AllInstancedStaticMesh.Num() - 1);
		UInstancedStaticMeshComponent* RandomMesh = AllInstancedStaticMesh[RandIndex];

		FVector Location = InitLocation;

		FVector Min, Max;
		RandomMesh->GetLocalBounds(Min, Max);

		FVector LocalBounds = Min-Max;
		Location.X = InitLocation.X - (LocalBounds.X/2);

		RandomMesh->AddInstance(FTransform(Rotation, Location, FVector::OneVector));

		CustomDistance -= - LocalBounds.Z + BookSpacing;
		InitLocation.Z = InitLocation.Z - LocalBounds.Z + BookSpacing;
	}
}
void AInstancedBook::InitInstancedStaticMesh()
{
	AllInstancedStaticMesh.Empty(); //Clear previous Instance
	for (int32 i = 0; i < AllStaticMesh.Num(); ++i)
	{
		FName Name = *FString::Printf(TEXT("InstancedMesh_%d"), i);
		UInstancedStaticMeshComponent* ISMComp = NewObject<UInstancedStaticMeshComponent>(this,Name);
		ISMComp->RegisterComponent();
		ISMComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		ISMComp->SetStaticMesh(AllStaticMesh[i]);
		AllInstancedStaticMesh.Add(ISMComp);
	}
}
