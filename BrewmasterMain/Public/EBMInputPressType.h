#pragma once
#include "CoreMinimal.h"
#include "EBMInputPressType.generated.h"

UENUM()
enum class EBMInputPressType : uint8 {
    NONE,
    Press,
    LongPress,
    Axis,
};

