#pragma once
#include "CoreMinimal.h"
#include "BMIngredientBagChange.generated.h"

class ABMBaseIngredientBag;
class ABMDynamicContainer;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIngredientBagChange {
    GENERATED_BODY()
public:
    UPROPERTY()
    ABMBaseIngredientBag* IngredientContainer;
    
    UPROPERTY()
    ABMDynamicContainer* RelevantContainer;
    
    UPROPERTY()
    bool bNewAttachState;
    
    FBMIngredientBagChange();
};

