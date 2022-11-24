#pragma once
#include "CoreMinimal.h"
#include "EBMInventoryBarState.generated.h"

UENUM()
enum class EBMInventoryBarState {
    Inactive,
    Active,
    Unavailable,
    Overburdened,
    WarningFlash,
};

