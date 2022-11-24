#pragma once
#include "CoreMinimal.h"
#include "EBMBeerShaderPropertyType.generated.h"

UENUM()
enum class EBMBeerShaderPropertyType : uint8 {
    Volume,
    Viscosity,
    LiquidColour,
    HeadColour,
    Clarity,
    HeadAndBubbles,
    MultiplyC02Release,
    AdditionalVisualTweaks,
    HeadSize,
    Bubbles,
};

