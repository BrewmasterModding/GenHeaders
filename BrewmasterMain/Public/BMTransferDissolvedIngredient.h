#pragma once
#include "CoreMinimal.h"
#include "EIngredientType.h"
#include "BMTransferDissolvedIngredient.generated.h"

class ABMDynamicContainer;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMTransferDissolvedIngredient {
    GENERATED_BODY()
public:
    UPROPERTY()
    ABMDynamicContainer* Container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    double Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIngredientType IngredientType;
    
    UPROPERTY()
    bool bFermentable;
    
    FBMTransferDissolvedIngredient();
};

