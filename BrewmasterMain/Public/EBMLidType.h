#pragma once
#include "CoreMinimal.h"
#include "EBMLidType.generated.h"

UENUM()
enum class EBMLidType : uint8 {
    NONE,
    Standard,
    MetalFixing,
    Screwtop,
    Bung,
};

