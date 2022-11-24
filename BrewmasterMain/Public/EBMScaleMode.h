#pragma once
#include "CoreMinimal.h"
#include "EBMScaleMode.generated.h"

UENUM()
enum class EBMScaleMode : uint8 {
    OriginalScale,
    CarryScale,
    OneScale,
};

