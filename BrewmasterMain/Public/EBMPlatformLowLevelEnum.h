#pragma once
#include "CoreMinimal.h"
#include "EBMPlatformLowLevelEnum.generated.h"

UENUM()
enum class EBMPlatformLowLevelEnum : uint8 {
    Unknown,
    PC,
    Switch,
    XboxOneGDK,
    XSX,
    PS4,
    PS5,
};

