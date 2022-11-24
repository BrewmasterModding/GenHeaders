#pragma once
#include "CoreMinimal.h"
#include "EBMGrainEffectPropertyType.generated.h"

UENUM(BlueprintType)
enum class EBMGrainEffectPropertyType : uint8 {
    PourSize,
    PourWidth,
    PourHeight,
    Velocity,
    PourRate,
};

