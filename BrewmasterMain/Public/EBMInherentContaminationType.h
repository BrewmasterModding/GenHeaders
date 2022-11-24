#pragma once
#include "CoreMinimal.h"
#include "EBMInherentContaminationType.generated.h"

UENUM(BlueprintType)
enum class EBMInherentContaminationType : uint8 {
    NONE,
    Inherent_MashOut,
    Inherent_BoilingWort,
    Inherent_BoilingWater,
    Inherent_ConditioningTime,
};

