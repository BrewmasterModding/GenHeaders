#pragma once
#include "CoreMinimal.h"
#include "BMNiagaraEffectControl.h"
#include "BMBoilingBubbleEffectStuct.h"
#include "EBMBoilingBubblesEffectPropertyType.h"
#include "BMBoilingBubbleEffectControl.generated.h"

class ABMDynamicContainer;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMBoilingBubbleEffectControl : public UBMNiagaraEffectControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BubblesCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BubblesCodeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TemperatureCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TemperatureCodeMaxValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMBoilingBubbleEffectStuct> Properties;
    
public:
    UBMBoilingBubbleEffectControl();
protected:
    UFUNCTION(BlueprintCallable)
    void SetParticleProperties(ABMDynamicContainer* Container, bool InEditor);
    
    UFUNCTION()
    void SetManualCodeProperties(ABMDynamicContainer* Container);
    
    UFUNCTION()
    float GetCodeValue(EBMBoilingBubblesEffectPropertyType PropertyType);
    
};

