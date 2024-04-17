// Fill out your copyright notice in the Description page of Project Settings.


#include "Gladys.h"

// Sets default values
AGladys::AGladys()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGladys::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGladys::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGladys::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

