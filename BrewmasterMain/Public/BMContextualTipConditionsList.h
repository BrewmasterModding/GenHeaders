#pragma once
#include "CoreMinimal.h"
#include "BMConditions.h"
#include "BMContextualTipConditionsList.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMContextualTipConditionsList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<FBMConditions> Conditions;
    
    FBMContextualTipConditionsList();
};

