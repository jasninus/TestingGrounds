// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PatrolRoute.generated.h"

/**
 *Component that contains patrol points
 *Made for use with Unreals Behaviour Tree and the method ChooseNextWaypoint
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TESTINGGROUNDS_API UPatrolRoute : public UActorComponent
{
	GENERATED_BODY()

public:
	TArray<AActor*> GetPatrolPoints() const;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditInstanceOnly, Category = "Patrol route")
		TArray<AActor*> PatrolPoints;
};