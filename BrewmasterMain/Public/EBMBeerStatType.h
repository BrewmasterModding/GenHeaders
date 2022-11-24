#pragma once
#include "CoreMinimal.h"
#include "EBMBeerStatType.generated.h"

UENUM(BlueprintType)
enum class EBMBeerStatType : uint8 {
    NONE,
    Liquid,
    Ingredient,
    Flavour,
    FlavourNotes,
    Last,
};

