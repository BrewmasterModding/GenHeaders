#pragma once
#include "CoreMinimal.h"
#include "EBMArticleType.generated.h"

UENUM(BlueprintType)
enum class EBMArticleType : uint8 {
    None,
    Brewing,
    BeerStyle,
    Equipment,
    Ingredient,
    BeerHistory,
};

