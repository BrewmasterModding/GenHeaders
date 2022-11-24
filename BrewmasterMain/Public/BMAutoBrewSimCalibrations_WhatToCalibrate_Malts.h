#pragma once
#include "CoreMinimal.h"
#include "BMAutoBrewSimCalibrations_WhatToCalibrate_Malts.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAutoBrewSimCalibrations_WhatToCalibrate_Malts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStarchPercentUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFermentableOptimalTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFermentableOptimalConversionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFermentableRateSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUnfermentableOptimalTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUnfermentableOptimalConversionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUnfermentableRateSpread;
    
    FBMAutoBrewSimCalibrations_WhatToCalibrate_Malts();
};

