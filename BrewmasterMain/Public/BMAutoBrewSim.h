#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMAutoBrewSimResults.h"
#include "BMAutoBrewSimCalibrations.h"
#include "BMAutoBrewSimParams.h"
#include "BMAutoBrewSim.generated.h"

class ABMDynamicContainer;

UCLASS()
class BREWMASTERMAIN_API ABMAutoBrewSim : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FBMAutoBrewSimResults> AllCalibrationResults;
    
private:
    UPROPERTY()
    TMap<FName, ABMDynamicContainer*> Name2Container;
    
public:
    ABMAutoBrewSim();
    UFUNCTION(BlueprintCallable)
    void StartCalibration(TArray<FBMAutoBrewSimParams> CalibrationTests, FBMAutoBrewSimCalibrations Options);
    
private:
    UFUNCTION()
    void CheckIfTestEnded();
    
};

