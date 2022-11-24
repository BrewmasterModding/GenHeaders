#pragma once
#include "CoreMinimal.h"
#include "EDockingState.generated.h"

UENUM()
enum class EDockingState : uint8 {
    MovingToDockingPosition,
    DockingAnimation,
    Docked,
    MovingToUndockingPosition,
    UndockingAnimation,
    Undocked,
};

