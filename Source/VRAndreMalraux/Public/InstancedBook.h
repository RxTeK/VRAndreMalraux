// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InstancedBook.generated.h"

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
	float MaxDistance;

	UPROPERTY(EditAnywhere, Category = "Parameters")
	bool Generate = true;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnConstruction(const FTransform& Transform) override;

	UFUNCTION(BlueprintCallable, Category="Components")
	void TestFunction();

	

};
