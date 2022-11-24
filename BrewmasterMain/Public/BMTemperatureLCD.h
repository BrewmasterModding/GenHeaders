#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMHeatExchangeData.h"
#include "BMTemperatureLCD.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTemperatureLCD : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    float CurrentTemperatureValue;
    
    UPROPERTY(BlueprintReadOnly)
    FString CurrentTemperatureString;
    
    UPROPERTY(BlueprintReadOnly)
    FBMHeatExchangeData CurrentHeatExchangeData;
    
    UPROPERTY(BlueprintReadOnly)
    FString CurrentSettingString;
    
    UPROPERTY(BlueprintReadOnly)
    bool bMovingToTarget;
    
public:
    UBMTemperatureLCD();
    UFUNCTION(BlueprintNativeEvent)
    FString UpdateTargetTemperature(FBMHeatExchangeData HeatExchangeData);
    
    UFUNCTION(BlueprintNativeEvent)
    FString UpdateCurrentTemperature(float Temperature, bool bInValidLiquid);
    
    UFUNCTION()
    void SetupUnitChangeBinding();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShowControl(bool bInControlOn);
    
    UFUNCTION(BlueprintCallable)
    void OnUnitsDisplayTypeChanged();
    
};

