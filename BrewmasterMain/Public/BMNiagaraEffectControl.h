#pragma once
#include "CoreMinimal.h"
#include "BMMasterShaderParameters.h"
#include "BMNiagaraEffectControl.generated.h"

class UNiagaraSystem;
class UNiagaraComponent;
class UStaticMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMNiagaraEffectControl : public UBMMasterShaderParameters {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* ParticleSystemBase;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* ParticleSystem;
    
    UPROPERTY(Instanced)
    UStaticMeshComponent* LiquidContainer;
    
public:
    UBMNiagaraEffectControl();
};

