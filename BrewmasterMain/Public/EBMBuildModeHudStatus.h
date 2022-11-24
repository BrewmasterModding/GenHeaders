#pragma once
#include "CoreMinimal.h"
#include "EBMBuildModeHudStatus.generated.h"

UENUM()
enum class EBMBuildModeHudStatus : uint8 {
    NONE,
    HUD,
    PICKUP,
    SWAP,
};

