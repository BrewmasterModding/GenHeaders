#pragma once
#include "CoreMinimal.h"
#include "ETweenLinearColorType.generated.h"

UENUM()
enum class ETweenLinearColorType {
    MaterialVectorFromTo,
    MaterialVectorTo,
    WidgetColorFromTo,
    WidgetColorTo,
};

