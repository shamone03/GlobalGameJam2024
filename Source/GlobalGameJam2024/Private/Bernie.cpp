// Fill out your copyright notice in the Description page of Project Settings.


#include "Bernie.h"

// Sets default values
ABernie::ABernie()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABernie::BeginPlay()
{
	Super::BeginPlay();
	if (m_playerUI != nullptr) {
		m_playerUI->AddToViewport(0);
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Black, "hello");
	}
}

// Called every frame
void ABernie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

