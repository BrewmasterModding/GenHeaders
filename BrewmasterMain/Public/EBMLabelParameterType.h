#pragma once
#include "CoreMinimal.h"
#include "EBMLabelParameterType.generated.h"

UENUM()
enum class EBMLabelParameterType {
    BaseColour,
    Normal,
    Roughness,
    Metallic,
    OpacityMask,
};

