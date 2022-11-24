#pragma once
#include "CoreMinimal.h"
#include "EBMConditionsStats.generated.h"

UENUM()
enum class EBMConditionsStats : uint8 {
    None,
    BeerStyle,
    BeerCategory,
    ABV,
    SRM,
    IBU,
    Carbonation,
    Protein,
    OG,
    FG,
    Contamination,
    Clarity,
    Body,
    Batch,
    Flavour,
    FlavourNote,
    AllFlavours,
    IngredientName,
    IngredientCategory,
    IngredientSubCategory,
    ColourInfluence,
    LowerOptimalTemperature,
    UpperOptimalTemperature,
    AlcoholTolerence,
    AlphaAcidContent,
    OriginCountry,
    IngredientVolume,
    EquipmentName,
    EquipmentCategory,
    EquipmentSubCategory,
    BeerTemperature,
    LiquidTemperature,
};

