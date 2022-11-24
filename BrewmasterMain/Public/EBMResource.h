#pragma once
#include "CoreMinimal.h"
#include "EBMResource.generated.h"

UENUM(BlueprintType)
enum class EBMResource : uint8 {
    NONE,
    Mastery,
    Reputation,
    BeerTokens,
    ProductionSlot,
    ProductionBonus,
};

