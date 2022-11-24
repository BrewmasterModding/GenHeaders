#pragma once
#include "CoreMinimal.h"
#include "EIngredientPhysicalType.generated.h"

UENUM(BlueprintType)
enum class EIngredientPhysicalType : uint8 {
    Liquid,
    Solid,
    Granules,
    Syrup,
    Yeast,
};

