#pragma once
#include "CoreMinimal.h"
#include "ETweenGenericType.generated.h"

UENUM()
enum class ETweenGenericType : uint8 {
    Any,
    Move,
    Scale,
    Rotate,
    RotateAroundPoint,
    FollowSpline,
    MaterialVector,
    MaterialScalar,
    WidgetAngle,
    WidgetOpacity,
    WidgetShear,
    CustomVector,
    CustomFloat,
    CustomVector2D,
};

