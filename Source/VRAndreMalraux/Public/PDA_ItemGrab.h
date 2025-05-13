// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PDA_ItemGrab.generated.h"

/**
 * 
 */
UCLASS()
class VRANDREMALRAUX_API UPDA_ItemGrab : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	//Construct de l'item
	UPDA_ItemGrab();

private:
	UPROPERTY(EditDefaultsOnly, Category = Class)
	TSubclassOf<class AActor> ActorClass;

	UPROPERTY(EditDefaultsOnly, Category = Class)
	FVector SizeItem;

	UPROPERTY(EditDefaultsOnly, Category = Class)
	TSubclassOf<class AActor> ItemToSpawn;


	UPROPERTY(EditDefaultsOnly)
	FString BookName;
	
	UPROPERTY(EditDefaultsOnly)
	UTexture2D* FrontTexture;

	UPROPERTY(EditDefaultsOnly)
	UTexture2D* BackTexture;
	

public:
	UFUNCTION(BlueprintPure, Category = Class)
	TSubclassOf<class AActor> GetActorClass() const;

	UFUNCTION(BlueprintPure, Category = Class)
	FVector GetSizeItem() const;

	UFUNCTION(BlueprintPure, Category = Class)
	TSubclassOf<class AActor> GetItemToSpawn() const;


	UFUNCTION(BlueprintPure)
	FString GetBookName() const;

	UFUNCTION(BlueprintPure)
	UTexture2D* GetFrontTexture() const;

	UFUNCTION(BlueprintPure)
	UTexture2D* GetBackTexture() const;
	
};
