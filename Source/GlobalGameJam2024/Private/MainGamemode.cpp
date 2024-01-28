// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGamemode.h"

void AMainGamemode::BeginPlay() {
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, "Absolutely gaming here");

}	