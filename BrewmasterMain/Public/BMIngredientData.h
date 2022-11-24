#pragma once
#include "CoreMinimal.h"
#include "EBMIngredientCategory.h"
#include "BMIngredientData_CategoryData.h"
#include "BMIngredientData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIngredientData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<EBMIngredientCategory, FBMIngredientData_CategoryData> CategoryData;
    
    FBMIngredientData();
};

