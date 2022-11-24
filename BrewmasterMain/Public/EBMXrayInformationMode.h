#pragma once
#include "CoreMinimal.h"
#include "EBMXrayInformationMode.generated.h"

UENUM(BlueprintType)
enum class EBMXrayInformationMode : uint8 {
    NONE,
    ContextualMode,
    OverviewMode,
};

