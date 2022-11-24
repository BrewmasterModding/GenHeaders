#pragma once
#include "CoreMinimal.h"
#include "ESizeBand.generated.h"

UENUM(BlueprintType)
enum class ESizeBand : uint8 {
    NONE,
    VerySmall,
    Small,
    Medium,
    Large,
    NumCategories,
};

