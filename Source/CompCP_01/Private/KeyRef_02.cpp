// Fill out your copyright notice in the Description page of Project Settings.

#include "KeyRef_02.h"

// Sets default values
AKeyRef_02::AKeyRef_02(){
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AKeyRef_02::BeginPlay(){
	Super::BeginPlay();	
}

// Called every frame
void AKeyRef_02::Tick(float DeltaTime){
	Super::Tick(DeltaTime);
}


void AKeyRef_02::setDistance() {}
void AKeyRef_02::setName(FString name) {}
void AKeyRef_02::setActive(bool bActive) {}


int AKeyRef_02::getDistance() {
	return 0;
}

FString AKeyRef_02::getName(int id) {
	return FString();
}

bool AKeyRef_02::isActive() {
	return false;
}

bool AKeyRef_02::isExtra() {
	//iuyiuyiuyky
	return false;
}


void AKeyRef_02::SkillControl_Implementation() {
	
}

bool AKeyRef_02::SkillMAX_Implementation() {
	return false;
}



