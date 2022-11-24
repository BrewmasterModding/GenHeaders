#pragma once
#include "CoreMinimal.h"
#include "EBMPlatformEnum.generated.h"

UENUM(BlueprintType)
enum class EBMPlatformEnum : uint8 {
    Unknown,
    PC,
    Switch,
    XBox,
    PlayStation,
};

