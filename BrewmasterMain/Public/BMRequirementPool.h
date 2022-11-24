#pragma once
#include "CoreMinimal.h"
#include "BMRequirementPool.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMRequirementPool {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> Condition;
    
    FBMRequirementPool();
};

