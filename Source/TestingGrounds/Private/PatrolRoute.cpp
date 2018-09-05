// Fill out your copyright notice in the Description page of Project Settings.

#include "PatrolRoute.h"

TArray<AActor*> UPatrolRoute::GetPatrolPoints() const
{
	return PatrolPoints;
}

// Called when the game starts
void UPatrolRoute::BeginPlay()
{
	Super::BeginPlay();

	// ...
}