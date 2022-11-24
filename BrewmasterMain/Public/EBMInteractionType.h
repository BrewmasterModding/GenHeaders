#pragma once
#include "CoreMinimal.h"
#include "EBMInteractionType.generated.h"

UENUM(BlueprintType)
enum class EBMInteractionType : uint8 {
    NONE,
    Pouring,
    Temperature,
    FlowControl,
    Pump,
    All,
    IconFraming,
    SwapItem,
};

