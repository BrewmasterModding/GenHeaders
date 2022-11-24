#pragma once
#include "CoreMinimal.h"
#include "BMLiquidPouringEffectStruct.h"
#include "BMNiagaraEffectControl.h"
#include "EBMLiquidPouringEffectPropertyType.h"
#include "BMLiquidPouringEffectControl.generated.h"

class UParticleSystem;
class ABMDynamicContainer;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMLiquidPouringEffectControl : public UBMNiagaraEffectControl {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UParticleSystem*> ParticleSystemBases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMLiquidPouringEffectStruct> Properties;
    
public:
    UBMLiquidPouringEffectControl();
protected:
    UFUNCTION(BlueprintCallable)
    void SetParticleProperties(ABMDynamicContainer* Container, bool InEditor);
    
    UFUNCTION()
    float GetCodeValue(EBMLiquidPouringEffectPropertyType PropertyType);
    
};

