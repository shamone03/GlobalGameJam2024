// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/Slider.h"
#include <PlayerUIWidget.h>
#include "Bernie.generated.h"

UCLASS()
class GLOBALGAMEJAM2024_API ABernie : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABernie();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UPlayerUIWidget> m_playerUI;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float test;
};
