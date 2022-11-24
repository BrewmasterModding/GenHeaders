#pragma once
#include "CoreMinimal.h"
#include "EBMRecipeBatchSize.generated.h"

UENUM(BlueprintType)
enum class EBMRecipeBatchSize : uint8 {
    Small,
    Medium,
    Large,
};

