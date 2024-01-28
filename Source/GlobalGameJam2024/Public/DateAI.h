// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Blueprint/UserWidget.h"
#include "DateAI.generated.h"

UCLASS()
class GLOBALGAMEJAM2024_API ADateAI : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADateAI();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere);
	TObjectPtr<UUserWidget> EngagementMeterUserWidget;

	UPROPERTY(EditAnywhere);
	float startEngagement = 100.f;

	float engagement;
};
