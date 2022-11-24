#pragma once
#include "CoreMinimal.h"
#include "BMIngredientIDs.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIngredientIDs {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<int32> IngredientIDs;
    
    FBMIngredientIDs();
};

