// Fill out your copyright notice in the Description page of Project Settings.


#include "PDA_ItemGrab.h"

UPDA_ItemGrab::UPDA_ItemGrab()
{
}

TSubclassOf<class AActor> UPDA_ItemGrab::GetActorClass() const
{
	return ActorClass;
}

UTexture2D* UPDA_ItemGrab::GetBackTexture() const
{
	return BackTexture;
}

UTexture2D* UPDA_ItemGrab::GetPlancheTexture() const
{
	return PlancheTexture;
}

FLinearColor UPDA_ItemGrab::GetColor() const
{
	return Color;
}

FVector UPDA_ItemGrab::GetSizeItem() const
{
	return SizeItem;
}

FName UPDA_ItemGrab::GetBookName() const
{
	return BookName;
}


TSubclassOf<class AActor> UPDA_ItemGrab::GetItemToSpawn() const
{
	return ItemToSpawn;
}

UTexture2D* UPDA_ItemGrab::GetFrontTexture() const
{
	return FrontTexture;
}


