#pragma once
#include "CoreMinimal.h"
#include "BMDesiredSizeTooltipData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMDesiredSizeTooltipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bCustomizeMinDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float CustomMinDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bCustomizeMaxDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float CustomMaxDesiredWidth;
    
    FBMDesiredSizeTooltipData();
};

