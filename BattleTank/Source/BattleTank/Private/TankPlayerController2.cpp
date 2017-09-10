// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController2.h"
#include "BattleTank.h"



ATank* ATankPlayerController2::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
