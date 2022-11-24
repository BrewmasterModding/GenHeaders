#pragma once
#include "CoreMinimal.h"
#include "EBMBeerGlassType.generated.h"

UENUM(BlueprintType)
enum class EBMBeerGlassType : uint8 {
    NONE,
    Tulip,
    Goblet,
    Pilsner,
    Weizen,
    BeerMug,
    NonicPint,
    IPA,
    Stout,
    TastingGlass,
};

