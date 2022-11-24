#pragma once
#include "CoreMinimal.h"
#include "EBMResource.h"
#include "BMResourceTooltipData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMResourceTooltipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EBMResource ResourceType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText ResourceAmount;
    
    FBMResourceTooltipData();
};

