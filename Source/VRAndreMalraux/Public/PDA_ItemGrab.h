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
	FVector SizeItem = FVector(1, 1, 1);

	UPROPERTY(EditDefaultsOnly, Category = Class)
	TSubclassOf<class AActor> ItemToSpawn;


	UPROPERTY(EditDefaultsOnly, Category = Book_Information)
	FName BookName;
	
	UPROPERTY(EditDefaultsOnly, Category = Book_Information)
	UTexture2D* FrontTexture;

	UPROPERTY(EditDefaultsOnly, Category = Book_Information)
	UTexture2D* BackTexture;

	UPROPERTY(EditDefaultsOnly, Category = Book_Information)
	UTexture2D* PlancheTexture;
	
	UPROPERTY(EditDefaultsOnly, Category = Book_Information)
	FLinearColor Color = FLinearColor::White;
	

public:
	UFUNCTION(BlueprintPure, Category = Class)
	TSubclassOf<class AActor> GetActorClass() const;

	UFUNCTION(BlueprintPure, Category = Class)
	FVector GetSizeItem() const;

	UFUNCTION(BlueprintPure, Category = Class)
	TSubclassOf<class AActor> GetItemToSpawn() const;


	UFUNCTION(BlueprintPure, Category = Book_Information)
	FName GetBookName() const;

	UFUNCTION(BlueprintPure, Category = Book_Information)
	UTexture2D* GetFrontTexture() const;

	UFUNCTION(BlueprintPure, Category = Book_Information)
	UTexture2D* GetBackTexture() const;

	UFUNCTION(BlueprintPure, Category = Book_Information)
	UTexture2D* GetPlancheTexture() const;
	
	UFUNCTION(BlueprintPure, Category = Book_Information)
	FLinearColor GetColor() const;
	
};
