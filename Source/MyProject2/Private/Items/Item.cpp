// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "DrawDebugHelpers.h"
#include "MyProject2/MyProject2.h"
#include "MyProject2/DebugMacros.h"


// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
	UWorld* World = GetWorld();
	FVector Forward = GetActorForwardVector();
	FVector Location = GetActorLocation();

	DRAW_SPHERE(Location);
	//DRAW_VECTOR();
	
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

