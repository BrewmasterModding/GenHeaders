#pragma once
#include "CoreMinimal.h"
#include "ETweenWidgetTargetType.generated.h"

UENUM()
enum class ETweenWidgetTargetType {
    Image,
    Border,
    Text,
    RichText,
    BMRichText,
    UUserWidget,
    UWidget,
};

