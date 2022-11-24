#pragma once
#include "CoreMinimal.h"
#include "EBMBottleType.generated.h"

UENUM(BlueprintType)
enum class EBMBottleType : uint8 {
    NONE,
    Longneck,
    LongneckTall,
    Belgian,
    BelgianTall,
    Bomber,
    Euro,
    Growler,
    MiniGrowler,
    Heritage,
    Stubby,
    Sparkling,
    Vichy,
};

