#pragma once
#include "CoreMinimal.h"
#include "EHeatExchangeType.generated.h"

UENUM(BlueprintType)
enum class EHeatExchangeType : uint8 {
    HeatAndCool,
    HeatOnly,
    CoolOnly,
};

