#pragma once
#include "CoreMinimal.h"
#include "ETweenVector2DType.generated.h"

UENUM()
enum class ETweenVector2DType {
    MoveTo,
    MoveBy,
    ScaleTo,
    ScaleBy,
    ShearTo,
    Custom,
};

