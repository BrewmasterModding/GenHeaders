#pragma once
#include "CoreMinimal.h"
#include "EBMRecipeInstructionVariable.generated.h"

UENUM(BlueprintType)
enum class EBMRecipeInstructionVariable : uint8 {
    IngredientType,
    IngredientName,
    ContainerType,
    Time,
    Volume,
    Temperature,
    Text,
    SpecificGravity,
    FinalGravity,
    Carbonation,
};

