#pragma once
#include "CoreMinimal.h"
#include "BMAutoBrewSimCalibrations_WhatToCalibrate_Hops.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAutoBrewSimCalibrations_WhatToCalibrate_Hops {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlphaAcidContent;
    
    FBMAutoBrewSimCalibrations_WhatToCalibrate_Hops();
};

