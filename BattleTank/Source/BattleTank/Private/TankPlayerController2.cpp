// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController2.h"
#include "BattleTank.h"

void ATankPlayerController2::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller not possessing a tank"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller possessing : %s"), *ControlledTank->GetName());
	}
}

ATank* ATankPlayerController2::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
