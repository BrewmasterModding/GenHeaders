#pragma once
#include "CoreMinimal.h"
#include "EBMRecipeInstructionType.h"
#include "EBMRecipeInstructionVariable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMIngredientCategory.h"
#include "BMRecipeAmountData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMRecipeAmountData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBMRecipeInstructionVariable Context;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBMIngredientCategory IngredientCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBMRecipeInstructionType Instruction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartingValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaximumValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IncrementValue;
    
    FBMRecipeAmountData();
};

