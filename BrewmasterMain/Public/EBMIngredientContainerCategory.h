#pragma once
#include "CoreMinimal.h"
#include "EBMIngredientContainerCategory.generated.h"

UENUM(BlueprintType)
enum class EBMIngredientContainerCategory : uint8 {
    NONE,
    SteepableMeshBag,
    GrainBag,
    Packet,
    Can,
    Jar,
    Bottle,
    Bag,
    Other,
};

