#pragma once
#include "CoreMinimal.h"
#include "EBMItemUnlockType.generated.h"

UENUM(BlueprintType)
enum class EBMItemUnlockType : uint8 {
    NONE,
    Ingredient,
    Equipment,
    Furniture,
    PackagingItems,
    CommercialProductionSlot,
    CommercialProductionBoost,
};

