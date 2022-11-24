#pragma once
#include "CoreMinimal.h"
#include "EBMCalendarImageType.generated.h"

UENUM()
enum class EBMCalendarImageType : uint8 {
    NONE,
    Passed,
    Striked,
    Current,
    Target,
};

