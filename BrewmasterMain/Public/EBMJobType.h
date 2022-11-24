#pragma once
#include "CoreMinimal.h"
#include "EBMJobType.generated.h"

UENUM(BlueprintType)
enum class EBMJobType : uint8 {
    Unique,
    Generic,
};

