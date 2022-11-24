#pragma once
#include "CoreMinimal.h"
#include "EBMStyleStatType.generated.h"

UENUM()
enum class EBMStyleStatType : uint8 {
    NONE,
    ABV,
    IBU,
    SRM,
    OriginalGravity,
    FinalGravity,
    Carbonation,
    KeyIngredients,
    StandardFlavourInfluence,
    FlavourNotesInfluence,
    KeyExcludedStandardFlavours,
    KeyExcludedFlavourNotes,
    Body,
    Clarity,
};

