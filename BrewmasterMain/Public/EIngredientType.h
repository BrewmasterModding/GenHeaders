#pragma once
#include "CoreMinimal.h"
#include "EIngredientType.generated.h"

UENUM(BlueprintType)
enum class EIngredientType : uint8 {
    Generic,
    Malt,
    Hops,
    Yeast,
    NOT_SPECIFIED,
};

