#pragma once
#include "CoreMinimal.h"
#include "BMRecipeData.h"
#include "BMRecipeCategory.generated.h"

USTRUCT()
struct BREWMASTERMAIN_API FBMRecipeCategory {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FString, FBMRecipeData> Recipes;
    
    FBMRecipeCategory();
};

