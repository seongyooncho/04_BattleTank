// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Tank.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	auto ControlledTank = Cast<ATank>(GetPawn());

	if (PlayerTank)
	{
		// TODO Move towards player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());
		ControlledTank->Fire(); // TODO Fire when ready
	}
}

