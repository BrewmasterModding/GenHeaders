#pragma once
#include "CoreMinimal.h"
#include "EBMRecipePropertiesEditFlags.generated.h"

UENUM()
enum class EBMRecipePropertiesEditFlags : uint8 {
    NONE,
    Name,
    Description,
    Style = 0x4,
    Instructions = 0x8,
};

