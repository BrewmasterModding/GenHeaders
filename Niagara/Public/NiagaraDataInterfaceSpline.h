#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceSpline.generated.h"

class AActor;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceSpline : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AActor* Source;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding SplineUserParameter;
    
    UNiagaraDataInterfaceSpline();
};

