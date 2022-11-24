#pragma once
#include "CoreMinimal.h"
#include "EBMIngredientSubCategory.generated.h"

UENUM(BlueprintType)
enum class EBMIngredientSubCategory : uint8 {
    NONE,
    Base,
    Kilned,
    Roasted,
    Crystal,
    OtherMalt,
    AdjunctGrain,
    Noble,
    Saazer,
    British,
    Styrian,
    Cascadian,
    Pacifical,
    Bittering,
    AmericanAle,
    BelgianAle,
    BritishAle,
    SourAndWild,
    WheatBeer,
    Lager,
    AdjunctSugar,
    Fruit,
    HerbSpice,
    Special,
};

