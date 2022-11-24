#pragma once
#include "CoreMinimal.h"
#include "BMSteamEffectStuct.h"
#include "BMNiagaraEffectControl.h"
#include "EBMSteamEffectPropertyType.h"
#include "BMSteamEffectControl.generated.h"

class ABMDynamicContainer;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMSteamEffectControl : public UBMNiagaraEffectControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EvaporationRateMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EvaporationRateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TemperatureCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TemperatureCodeMaxValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMSteamEffectStuct> Properties;
    
public:
    UBMSteamEffectControl();
protected:
    UFUNCTION(BlueprintCallable)
    void SetParticleProperties(ABMDynamicContainer* Container, bool InEditor);
    
    UFUNCTION()
    void SetManualCodeProperties(ABMDynamicContainer* Container);
    
    UFUNCTION()
    float GetCodeValue(EBMSteamEffectPropertyType PropertyType, ABMDynamicContainer* Container);
    
};

