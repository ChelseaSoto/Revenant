// Fill out your copyright notice in the Description page of Project Settings.


#include "RevenantGameUserSettings.h"

URevenantGameUserSettings::URevenantGameUserSettings()
{
	GammaValue = 2.2f;
}

URevenantGameUserSettings* URevenantGameUserSettings::GetRevenantGameUserSettings()
{
	return Cast<URevenantGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}

void URevenantGameUserSettings::SetGammaValue(float NewGammaValue)
{
	GammaValue = NewGammaValue;
}

float URevenantGameUserSettings::GetGammaValue() const
{
	return GammaValue;
}
