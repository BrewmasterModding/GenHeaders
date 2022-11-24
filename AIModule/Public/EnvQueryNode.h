#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EnvQueryNode.generated.h"

UCLASS(Abstract)
class AIMODULE_API UEnvQueryNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 VerNum;
    
    UEnvQueryNode();
};

