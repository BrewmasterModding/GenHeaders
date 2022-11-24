#pragma once
#include "CoreMinimal.h"
#include "EBMXrayInformationSelectedState.generated.h"

UENUM()
enum class EBMXrayInformationSelectedState : uint8 {
    UnSelected,
    Selected,
    Disabled,
};

