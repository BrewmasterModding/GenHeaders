#pragma once
#include "CoreMinimal.h"
#include "EBMFurnitureCategory.generated.h"

UENUM(BlueprintType)
enum class EBMFurnitureCategory : uint8 {
    NONE,
    Furniture,
    Lights,
    Decorations,
    Seasonal,
};

