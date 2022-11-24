#pragma once
#include "CoreMinimal.h"
#include "EBMRampMeshShaderPropertyType.generated.h"

UENUM()
enum class EBMRampMeshShaderPropertyType : uint8 {
    LiquidColour,
    HeadColour,
    Opacity,
    HeadAndBubbles,
    AdditionalVisualTweaks,
};

