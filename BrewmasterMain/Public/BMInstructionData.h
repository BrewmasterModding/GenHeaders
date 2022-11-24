#pragma once
#include "CoreMinimal.h"
#include "EBMRecipeInstructionVariable.h"
#include "BMInstructionData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMInstructionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    EBMRecipeInstructionVariable VariableType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString VariableValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString OptionalVariableAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool NotEditable;
    
    FBMInstructionData();
};

