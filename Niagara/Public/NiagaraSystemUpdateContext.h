#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemUpdateContext.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

USTRUCT()
struct NIAGARA_API FNiagaraSystemUpdateContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    TArray<UNiagaraComponent*> ComponentsToReset;
    
    UPROPERTY(Instanced, Transient)
    TArray<UNiagaraComponent*> ComponentsToReInit;
    
    UPROPERTY(Instanced, Transient)
    TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy;
    
    UPROPERTY(Transient)
    TArray<UNiagaraSystem*> SystemSimsToDestroy;
    
public:
    FNiagaraSystemUpdateContext();
};

