#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMAutoBrewSimCalibrations_WhatToCalibrate.h"
#include "BMAutoBrewSimCalibrations.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAutoBrewSimCalibrations : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMAutoBrewSimCalibrations_WhatToCalibrate WhatToCalibrate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxCalibrationIterations;
    
    FBMAutoBrewSimCalibrations();
};

