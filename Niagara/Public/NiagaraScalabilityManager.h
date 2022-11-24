#pragma once
#include "CoreMinimal.h"
#include "NiagaraScalabilityManager.generated.h"

class UNiagaraEffectType;
class UNiagaraComponent;

USTRUCT()
struct FNiagaraScalabilityManager {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UNiagaraEffectType* EffectType;
    
    UPROPERTY(Instanced, Transient)
    TArray<UNiagaraComponent*> ManagedComponents;
    
    NIAGARA_API FNiagaraScalabilityManager();
};

