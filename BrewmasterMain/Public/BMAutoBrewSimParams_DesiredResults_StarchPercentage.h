#pragma once
#include "CoreMinimal.h"
#include "ECalibrationTargetType.h"
#include "BMAutoBrewSimParams_DesiredResults_StarchPercentage.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAutoBrewSimParams_DesiredResults_StarchPercentage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECalibrationTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ToleranceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ErrorValueMultipler;
    
    FBMAutoBrewSimParams_DesiredResults_StarchPercentage();
};

