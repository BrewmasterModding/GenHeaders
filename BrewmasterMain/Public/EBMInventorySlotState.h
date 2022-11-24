#pragma once
#include "CoreMinimal.h"
#include "EBMInventorySlotState.generated.h"

UENUM(BlueprintType)
enum class EBMInventorySlotState : uint8 {
    Normal,
    Selected,
    Disabled,
    Overburdened,
};

