#pragma once
#include "CoreMinimal.h"
#include "EBMAnalyticActionType.generated.h"

UENUM()
enum class EBMAnalyticActionType {
    NONE,
    Used,
    Destroyed,
    Bought,
    Created,
    Cleaned,
};

