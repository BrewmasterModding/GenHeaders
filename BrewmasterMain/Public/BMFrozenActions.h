#pragma once
#include "CoreMinimal.h"
#include "BMInputActionData.h"
#include "BMFrozenActions.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMFrozenActions {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBMInputActionData> FrozenActions;
    
    FBMFrozenActions();
};

