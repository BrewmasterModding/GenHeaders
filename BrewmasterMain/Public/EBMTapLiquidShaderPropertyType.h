#pragma once
#include "CoreMinimal.h"
#include "EBMTapLiquidShaderPropertyType.generated.h"

UENUM(BlueprintType)
enum class EBMTapLiquidShaderPropertyType : uint8 {
    LiquidColour,
    Opacity,
    TapHeight,
    StartFlowPosition,
    EndFlowPosition,
};

