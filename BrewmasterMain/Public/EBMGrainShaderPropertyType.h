#pragma once
#include "CoreMinimal.h"
#include "EBMGrainShaderPropertyType.generated.h"

UENUM()
enum class EBMGrainShaderPropertyType : uint8 {
    Volume,
    VolumePercent,
    GrainColour,
    GrainColourAdditionalWetnessTint,
    PouringMoundGeneration,
    PourSize,
    PouringVisualTweaks,
    PourRate,
    PouringSequenceBool,
};

