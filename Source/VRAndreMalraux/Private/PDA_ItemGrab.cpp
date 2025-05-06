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

FVector UPDA_ItemGrab::GetSizeItem() const
{
	return SizeItem;
}

UTexture2D* UPDA_ItemGrab::GetFrontTexture() const
{
	return FrontTexture;
}


