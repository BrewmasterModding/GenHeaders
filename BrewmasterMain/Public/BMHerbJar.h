#pragma once
#include "CoreMinimal.h"
#include "BMBaseIngredient.h"
#include "BMHerbJar.generated.h"

class UParticleSystem;
class UBMShakingComponent;
class UParticleSystemComponent;

UCLASS()
class BREWMASTERMAIN_API ABMHerbJar : public ABMBaseIngredient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UParticleSystemComponent* SpawnedShakeParticles;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMShakingComponent* ShakingComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UParticleSystem* ShakeParticleEffect;
    
public:
    ABMHerbJar();
};

