// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthCpntroller.h"

// Sets default values
AHealthCpntroller::AHealthCpntroller()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHealthCpntroller::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AHealthCpntroller::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

