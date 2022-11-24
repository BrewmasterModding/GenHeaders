#pragma once
#include "CoreMinimal.h"
#include "BMSizeSpawnVariablesStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMSizeSpawnVariablesStuct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Lifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartRadius;
    
    FBMSizeSpawnVariablesStuct();
};

