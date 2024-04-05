// Fill out your copyright notice in the Description page of Project Settings.
#include "BPFL_LeapToPosition.h"
#include "CoreMinimal.h"


void UBPFL_LeapToPosition::LeapToPosition(AActor* TargetActor, FVector DestinationPosition, FVector StartPosition, float JumpDuration)
{
    if (GEngine)
        GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Leap!"));
}