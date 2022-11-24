#pragma once
#include "CoreMinimal.h"
#include "EBMIngredientCategory.generated.h"

UENUM(BlueprintType)
enum class EBMIngredientCategory : uint8 {
    NONE,
    Grain,
    Hops,
    Yeast,
    SteepableGrain,
    MaltExtract,
    Other,
    NumCategories,
};

