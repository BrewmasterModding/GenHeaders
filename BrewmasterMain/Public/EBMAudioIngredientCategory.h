#pragma once
#include "CoreMinimal.h"
#include "EBMAudioIngredientCategory.generated.h"

UENUM()
enum class EBMAudioIngredientCategory {
    NONE,
    Liquid,
    Syrup,
    Grain,
    Powder,
    Yeast,
    Empty,
};

