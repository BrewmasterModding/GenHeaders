#pragma once
#include "CoreMinimal.h"
#include "EBMEquipmentCategory.generated.h"

UENUM(BlueprintType)
enum class EBMEquipmentCategory : uint8 {
    NONE,
    BrewContainer,
    MashTun,
    FermentationContainer,
    ConditioningContainer,
    HeatingAndCooling,
    FlowControl,
    Stirring,
    Measuring,
    NumCategories,
};

