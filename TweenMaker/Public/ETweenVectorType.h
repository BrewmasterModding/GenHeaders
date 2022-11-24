#pragma once
#include "CoreMinimal.h"
#include "ETweenVectorType.generated.h"

UENUM()
enum class ETweenVectorType {
    MoveTo,
    MoveBy,
    ScaleTo,
    ScaleBy,
    Custom,
};

