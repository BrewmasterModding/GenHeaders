#pragma once
#include "CoreMinimal.h"
#include "EBMIngredientStatType.generated.h"

UENUM(BlueprintType)
enum class EBMIngredientStatType : uint8 {
    NONE,
    Mass,
    NonDissolvedMass,
};

