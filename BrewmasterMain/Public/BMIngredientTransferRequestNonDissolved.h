#pragma once
#include "CoreMinimal.h"
#include "EBMLiquidTransferType.h"
#include "BMIngredientAmount.h"
#include "BMIngredientTransferRequestNonDissolved.generated.h"

class ABMDynamicContainer;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIngredientTransferRequestNonDissolved {
    GENERATED_BODY()
public:
    UPROPERTY()
    ABMDynamicContainer* ContainerToAddTo;
    
    UPROPERTY()
    ABMDynamicContainer* ContainerToRemoveFrom;
    
    UPROPERTY()
    FBMIngredientAmount IngredientProperties;
    
    UPROPERTY()
    EBMLiquidTransferType LiquidTransferType;
    
    UPROPERTY()
    float LiquidVolumeToTransfer;
    
    FBMIngredientTransferRequestNonDissolved();
};

