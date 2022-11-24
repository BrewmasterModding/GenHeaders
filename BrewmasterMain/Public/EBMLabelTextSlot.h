#pragma once
#include "CoreMinimal.h"
#include "EBMLabelTextSlot.generated.h"

UENUM(BlueprintType)
enum class EBMLabelTextSlot : uint8 {
    BeerName,
    BeerStyle,
    ABV,
    Volume,
};

