#pragma once
#include "CoreMinimal.h"
#include "EBMEquipmentMaterial.generated.h"

UENUM(BlueprintType)
enum class EBMEquipmentMaterial : uint8 {
    NONE,
    Metal,
    Plastic,
    Wood,
    Glass,
    Fabric,
    Stone,
};

