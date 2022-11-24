#pragma once
#include "CoreMinimal.h"
#include "EBMBuildType.generated.h"

UENUM(BlueprintType)
enum class EBMBuildType : uint8 {
    Alpha,
    Beta,
    NextFest,
    Review,
    Release,
    Dev,
};

