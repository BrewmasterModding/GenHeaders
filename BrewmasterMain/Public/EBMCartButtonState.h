#pragma once
#include "CoreMinimal.h"
#include "EBMCartButtonState.generated.h"

UENUM()
enum class EBMCartButtonState : uint8 {
    Enabled,
    DisabledItemInCart,
    DisabledItemPurchased,
    DisableItemOwned = 0x4,
    Disabled = 0x8,
};

