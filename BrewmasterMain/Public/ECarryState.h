#pragma once
#include "CoreMinimal.h"
#include "ECarryState.generated.h"

UENUM(BlueprintType)
enum class ECarryState : uint8 {
    NotCarried,
    Carried,
    Transitioning,
    Occupied,
};

