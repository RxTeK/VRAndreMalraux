// Fill out your copyright notice in the Description page of Project Settings.


#include "GrabObject.h"

// Sets default values
AGrabObject::AGrabObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Construct, add a CustomMesh called "Mesh" init proprety
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Mesh->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void AGrabObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGrabObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

