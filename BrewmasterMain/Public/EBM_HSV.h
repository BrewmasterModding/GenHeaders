#pragma once
#include "CoreMinimal.h"
#include "EBM_HSV.generated.h"

UENUM(BlueprintType)
enum class EBM_HSV : uint8 {
    H,
    S,
    V,
    EBM_MAX UMETA(Hidden),
};

