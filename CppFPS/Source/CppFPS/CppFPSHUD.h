// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "CppFPSHUD.generated.h"

UCLASS()
class ACppFPSHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACppFPSHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

