#pragma once
#include "CoreMinimal.h"
#include "ETweenFloatType.generated.h"

UENUM()
enum class ETweenFloatType {
    MaterialScalarFromTo,
    MaterialScalarTo,
    RotateAroundPoint,
    FollowSpline,
    WidgetAngleTo,
    WidgetOpacityTo,
    Custom,
};

