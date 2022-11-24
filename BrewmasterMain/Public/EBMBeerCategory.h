#pragma once
#include "CoreMinimal.h"
#include "EBMBeerCategory.generated.h"

UENUM(BlueprintType)
enum class EBMBeerCategory : uint8 {
    NONE,
    AmberAle,
    BrownAle,
    IPA,
    Hybrid,
    PaleAle,
    Porter,
    SpecialityBeer,
    Stout,
    StrongAle,
    WheatBeer,
    SUBSCRIBED,
};

