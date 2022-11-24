#pragma once
#include "CoreMinimal.h"
#include "ECalibrationTargetType.generated.h"

UENUM(BlueprintType)
enum class ECalibrationTargetType : uint8 {
    ECal_None,
    ECal_Equal,
    ECal_AtMost,
    ECal_AtLeast,
    ECal_MAX UMETA(Hidden),
};

