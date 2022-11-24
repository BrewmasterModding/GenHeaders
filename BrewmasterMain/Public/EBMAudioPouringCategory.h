#pragma once
#include "CoreMinimal.h"
#include "EBMAudioPouringCategory.generated.h"

UENUM()
enum class EBMAudioPouringCategory {
    InitialImpact,
    EndingImpact,
    ImpactLoop,
    Pouring,
    Other,
};

