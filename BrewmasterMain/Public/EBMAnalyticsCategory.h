#pragma once
#include "CoreMinimal.h"
#include "EBMAnalyticsCategory.generated.h"

UENUM(BlueprintType)
enum class EBMAnalyticsCategory : uint8 {
    NONE,
    Beer,
    Equipment,
    Ingredient,
    Inventory,
    World,
    Application,
    Job,
    Furniture,
};

