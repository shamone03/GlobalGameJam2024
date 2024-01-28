// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainGamemode.generated.h"

/**
 * 
 */
UCLASS()
class GLOBALGAMEJAM2024_API AMainGamemode : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void BeginPlay() override;
};
