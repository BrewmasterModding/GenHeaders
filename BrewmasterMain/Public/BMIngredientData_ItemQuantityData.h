#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMIngredientData_ItemQuantityData.generated.h"

class ABMBaseIngredient;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIngredientData_ItemQuantityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ABMBaseIngredient> Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StorageQuantity;
    
    FBMIngredientData_ItemQuantityData();
};

