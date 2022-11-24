#pragma once
#include "CoreMinimal.h"
#include "EIngredientSubTypeOther.generated.h"

UENUM(BlueprintType)
enum class EIngredientSubTypeOther : uint8 {
    NONE,
    AdjunctSugar,
    FruitExtract,
    HerbsSpices,
    Special,
    MaltExtract,
};

