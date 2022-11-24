#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BMMasterShaderParameters.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMMasterShaderParameters : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<FName, float> VectorShaderParameterProperties;
    
public:
    UBMMasterShaderParameters();
};

