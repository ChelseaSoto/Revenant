// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "RevenantGameUserSettings.generated.h"

/**
 * 
 */
UCLASS()
class REVENANT_API URevenantGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()
	
public:
	URevenantGameUserSettings();

private:
	UPROPERTY(Config)
	float GammaValue;

public:

	UFUNCTION(BlueprintCallable)
	static URevenantGameUserSettings* GetRevenantGameUserSettings();

	UFUNCTION(BlueprintCallable, Category="Revenant")
	void SetGammaValue(float NewGammaValue);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Revenant")
	float GetGammaValue() const;
};
