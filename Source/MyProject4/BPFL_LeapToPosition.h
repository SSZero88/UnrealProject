// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_LeapToPosition.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT4_API UBPFL_LeapToPosition : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "MyBlueprintLibrary")
	static void LeapToPosition(AActor* TargetActor, FVector DestinationPosition, FVector StartPosition, float JumpDuration);
};


