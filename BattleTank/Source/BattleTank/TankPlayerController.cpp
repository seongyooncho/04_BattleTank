// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto Tank = GetControlledTank();
	if (Tank)
	{
		UE_LOG(LogTemp, Warning, TEXT("We got tank: %s"), *Tank->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("We got no tank."));
	}
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


