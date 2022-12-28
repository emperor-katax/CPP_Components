// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyRef_01.h"

// Sets default values
AKeyRef_01::AKeyRef_01(){
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AKeyRef_01::BeginPlay(){
	Super::BeginPlay();	
}

// Called every frame
void AKeyRef_01::Tick(float DeltaTime){
	Super::Tick(DeltaTime);
}


