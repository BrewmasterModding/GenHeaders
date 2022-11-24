#pragma once
#include "CoreMinimal.h"
#include "BMNiagaraEffectControl.h"
#include "ESizeBand.h"
#include "BMSizeSpawnVariablesStuct.h"
#include "BMFermantationYeastEffectStuct.h"
#include "EBMFermentationYeastRaftEffectsPropertyType.h"
#include "BMFermentationYeastEffectControl.generated.h"

class ABMDynamicContainer;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMFermentationYeastEffectControl : public UBMNiagaraEffectControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YeastActivityMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YeastActivityMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ESizeBand, FBMSizeSpawnVariablesStuct> EffectSpawnInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMFermantationYeastEffectStuct> Properties;
    
public:
    UPROPERTY(EditDefaultsOnly)
    bool bIsUp;
    
    UBMFermentationYeastEffectControl();
protected:
    UFUNCTION(BlueprintCallable)
    void SetParticleProperties(ABMDynamicContainer* Container, bool InEditor);
    
    UFUNCTION()
    void SetManualCodeProperties(ABMDynamicContainer* Container);
    
    UFUNCTION()
    float GetCodeValue(EBMFermentationYeastRaftEffectsPropertyType PropertyType);
    
};

