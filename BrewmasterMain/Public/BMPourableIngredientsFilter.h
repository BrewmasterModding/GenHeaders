#pragma once
#include "CoreMinimal.h"
#include "EBMIngredientSubCategory.h"
#include "BMPourableIngredientsFilter.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPourableIngredientsFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EBMIngredientSubCategory IngredientSubCategory;
    
    FBMPourableIngredientsFilter();
};

