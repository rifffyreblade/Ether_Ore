// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "PlayerControllerWrapper.generated.h"

/**
 * 
 */
UCLASS()
class ETHER_ORE_API APlayerControllerWrapper : public APlayerController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = Ether_Ore)
	void NextPlayer();
};
