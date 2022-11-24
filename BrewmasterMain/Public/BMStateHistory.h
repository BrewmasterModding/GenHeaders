#pragma once
#include "CoreMinimal.h"
#include "BMSingleVolumeState.h"
#include "BMStateHistory.generated.h"

class ABMDynamicContainer;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMStateHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float Timestamp;
    
    UPROPERTY(BlueprintReadOnly)
    ABMDynamicContainer* ContainerRef;
    
    UPROPERTY(BlueprintReadOnly)
    FBMSingleVolumeState VolumeState;
    
    FBMStateHistory();
};

