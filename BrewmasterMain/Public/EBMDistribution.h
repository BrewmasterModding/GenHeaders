#pragma once
#include "CoreMinimal.h"
#include "EBMDistribution.generated.h"

UENUM(BlueprintType)
enum class EBMDistribution : uint8 {
    None,
    Local,
    Regional,
    National,
    International,
};

