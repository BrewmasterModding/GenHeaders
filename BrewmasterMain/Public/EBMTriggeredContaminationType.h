#pragma once
#include "CoreMinimal.h"
#include "EBMTriggeredContaminationType.generated.h"

UENUM(BlueprintType)
enum class EBMTriggeredContaminationType : uint8 {
    NONE,
    Triggered_WortCooling,
    Triggered_WortPouring,
    Triggered_FermentationLidOff,
    Triggered_FermentationTemperature,
    Triggered_YeastAutolysis,
    Triggered_MashOptimalTemp,
};

