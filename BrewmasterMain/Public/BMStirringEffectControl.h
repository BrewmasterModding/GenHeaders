#pragma once
#include "CoreMinimal.h"
#include "EBMStirringEffectPropertyType.h"
#include "BMStirringEffectStuct.h"
#include "BMEffectControl.h"
#include "BMStirringEffectControl.generated.h"

class ABMDynamicContainer;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMStirringEffectControl : public UBMEffectControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GrainToLiquidVolumeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GrainToLiquidVolumeMax;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMStirringEffectStuct> Properties;
    
public:
    UBMStirringEffectControl();
protected:
    UFUNCTION(BlueprintCallable)
    void SetParticleProperties(ABMDynamicContainer* Container, bool InEditor);
    
    UFUNCTION()
    float GetCodeValue(EBMStirringEffectPropertyType PropertyType);
    
};

