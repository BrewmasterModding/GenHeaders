#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMAutoBrewSimCalibrations.h"
#include "BMAutoBrewSimParams.h"
#include "BMAutoBrewSimDebugWidget.generated.h"

class ABMAutoBrewSim;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMAutoBrewSimDebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FBMAutoBrewSimParams> CalibrationTests;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FBMAutoBrewSimCalibrations Options;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ABMAutoBrewSim* AutoBrewSim;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bSetupDone;
    
public:
    UBMAutoBrewSimDebugWidget();
protected:
    UFUNCTION()
    void UpdateDataFromBrewsim();
    
    UFUNCTION(BlueprintCallable)
    void SetupBrewSimDebugWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeAcceleration(bool IsActive, float TimeSpeed);
    
    UFUNCTION(BlueprintCallable)
    void ResetFixedData();
    
    UFUNCTION(BlueprintCallable)
    void ResetDebuging();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshDataDisplay();
    
    UFUNCTION(BlueprintCallable)
    void CreateAutoBrewSim();
    
};

