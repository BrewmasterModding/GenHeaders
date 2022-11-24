#pragma once
#include "CoreMinimal.h"
#include "EBMLabelStartType.generated.h"

UENUM(BlueprintType)
enum class EBMLabelStartType : uint8 {
    Template,
    Preset,
    PlayerPrevious,
};

