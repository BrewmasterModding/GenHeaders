#pragma once
#include "CoreMinimal.h"
#include "BMAutoBrewSimCalibrations_WhatToCalibrate_Yeast.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAutoBrewSimCalibrations_WhatToCalibrate_Yeast {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGrowthRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFermentationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBackgroundMortalityFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMortalityRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGrowthSugars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAvailableSugarsHibernationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMaxColonySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOptimalTemperatureLowerBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOptimalTemperatureHigherBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCompleteHibernationTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCompleteDeathTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLagTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlcoholTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlcoholProduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAttenuationAdjustMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGrowthSugarsAdjustMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUpperOptimalTemperatureRangeAdjustMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLowerOptimalTemperatureRangeAdjustMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCompleteHibernationTemperatureAdjustMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCompleteDeathTemperatureAdjustMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlcoholToleranceAdjustMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlcoholProductionAdjustMax;
    
    FBMAutoBrewSimCalibrations_WhatToCalibrate_Yeast();
};

