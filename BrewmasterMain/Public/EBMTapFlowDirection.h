#pragma once
#include "CoreMinimal.h"
#include "EBMTapFlowDirection.generated.h"

UENUM(BlueprintType)
enum class EBMTapFlowDirection : uint8 {
    IntakeOnly,
    OuttakeOnly,
    Both,
};

