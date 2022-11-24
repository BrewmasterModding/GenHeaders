#pragma once
#include "CoreMinimal.h"
#include "EBMInventoryStorageLocation.generated.h"

UENUM(BlueprintType)
enum class EBMInventoryStorageLocation : uint8 {
    NONE,
    EquipmentCupboard,
    Fridge,
    IngredientCupboard,
    FurnitureCupboard,
};

