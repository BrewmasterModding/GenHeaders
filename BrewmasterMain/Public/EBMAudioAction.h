#pragma once
#include "CoreMinimal.h"
#include "EBMAudioAction.generated.h"

UENUM()
enum class EBMAudioAction : uint8 {
    NONE,
    Pickup,
    Putdown,
    Action1,
    Action2,
    Action3,
    Action4,
    Special,
    Sloshing,
    Heating,
};

