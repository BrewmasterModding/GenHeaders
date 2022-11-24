#pragma once
#include "CoreMinimal.h"
#include "EBMTransferType.generated.h"

UENUM()
enum class EBMTransferType : uint8 {
    Default,
    PickUp,
    PutDown,
    Docking,
    Undocking,
    Pouring,
};

