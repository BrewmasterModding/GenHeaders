#pragma once
#include "CoreMinimal.h"
#include "EIconType.generated.h"

UENUM(BlueprintType)
enum class EIconType : uint8 {
    None,
    LiquidOverview,
    Flavours,
    TastingPage,
    Hops,
    Yeast,
    Malt,
    OtherIngredient,
};

