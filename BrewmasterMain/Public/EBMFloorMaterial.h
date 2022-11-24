#pragma once
#include "CoreMinimal.h"
#include "EBMFloorMaterial.generated.h"

UENUM()
enum class EBMFloorMaterial : uint8 {
    NONE,
    Tile,
    Carpet,
    Wood,
};

