#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMRecipeInstruction.h"
#include "BMGuidedRecipeData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMGuidedRecipeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GuidedRecipeID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FBMRecipeInstruction InstructionStage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName InstructionTipLoc;
    
    FBMGuidedRecipeData();
};

