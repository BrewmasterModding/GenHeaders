#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraPrecompileContainer.generated.h"

class UNiagaraScript;
class UNiagaraSystem;

UCLASS()
class NIAGARA_API UNiagaraPrecompileContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UNiagaraScript*> Scripts;
    
    UPROPERTY()
    UNiagaraSystem* System;
    
    UNiagaraPrecompileContainer();
};

