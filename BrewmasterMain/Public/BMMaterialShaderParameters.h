#pragma once
#include "CoreMinimal.h"
#include "BMMasterShaderParameters.h"
#include "BMMaterialShaderParameters.generated.h"

class UStaticMeshComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMMaterialShaderParameters : public UBMMasterShaderParameters {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UMaterialInterface* Material;
    
    UPROPERTY()
    UMaterialInstanceDynamic* DynamicInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* MaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* MaterialInstance_DefaultLit;
    
    UPROPERTY(Instanced)
    UStaticMeshComponent* LiquidContainer;
    
public:
    UBMMaterialShaderParameters();
};

