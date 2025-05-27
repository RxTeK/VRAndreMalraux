// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InstancedBook.generated.h"


USTRUCT(BlueprintType)
struct FBookPoint
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, meta = (MakeEditWidget))
	FVector Location;
	
	UPROPERTY(EditAnywhere)
	float Distance;

	UPROPERTY(EditAnywhere)
	FRotator Rotation;
};

UCLASS()
class VRANDREMALRAUX_API AInstancedBook : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInstancedBook();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Components")
	TArray<UStaticMesh*> AllStaticMesh;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TArray<UInstancedStaticMeshComponent*> AllInstancedStaticMesh;

	UPROPERTY(EditAnywhere, Category = "Parameters")
	bool Generate = true;

	UPROPERTY(EditAnywhere, Category = "Parameters")
	float BookSpacing = 0.5f;

	UPROPERTY(EditAnywhere, Category = "Parameters",  meta = (MakeEditWidget))
	TArray<FBookPoint> BooksLocations;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnConstruction(const FTransform& Transform) override;

	UFUNCTION(BlueprintCallable, Category="Components")
	void GenerateLineBook(FVector InitLocation, float MaxDistance, FRotator Rotation);

	UFUNCTION(BlueprintCallable, Category="Components")
	void InitInstancedStaticMesh();
	
	

};
