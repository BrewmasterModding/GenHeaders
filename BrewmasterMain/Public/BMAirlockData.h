#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMAirlockData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAirlockData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PressureReleased;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PressureReleaseThreshold;
    
    FBMAirlockData();
};

