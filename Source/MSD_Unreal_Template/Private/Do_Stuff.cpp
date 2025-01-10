// Fill out your copyright notice in the Description page of Project Settings.


#include "Do_Stuff.h"

// Sets default values
ADo_Stuff::ADo_Stuff()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADo_Stuff::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADo_Stuff::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

