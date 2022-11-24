#pragma once
#include "CoreMinimal.h"
#include "BMMasterShaderParameters.h"
#include "BMEffectControl.generated.h"

class UParticleSystem;
class UStaticMeshComponent;
class UParticleSystemComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMEffectControl : public UBMMasterShaderParameters {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* ParticleSystemBase;
    
    UPROPERTY(Instanced)
    UParticleSystemComponent* ParticleSystem;
    
    UPROPERTY(Instanced)
    UStaticMeshComponent* LiquidContainer;
    
public:
    UBMEffectControl();
};

