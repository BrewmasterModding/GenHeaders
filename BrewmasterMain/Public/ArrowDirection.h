#pragma once
#include "CoreMinimal.h"
#include "ArrowDirection.generated.h"

UENUM(BlueprintType)
enum class ArrowDirection : uint8 {
    Up,
    Left,
    Down,
    Right,
};

