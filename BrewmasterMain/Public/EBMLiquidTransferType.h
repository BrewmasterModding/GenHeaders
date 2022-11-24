#pragma once
#include "CoreMinimal.h"
#include "EBMLiquidTransferType.generated.h"

UENUM()
enum class EBMLiquidTransferType : uint8 {
    NONE,
    Pouring,
    TapsTubes,
    Overflowing,
};

