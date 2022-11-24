#pragma once
#include "CoreMinimal.h"
#include "EBMOverflowingShaderPropertyType.h"
#include "BMMaterialShaderParameters.h"
#include "BMOverflowingShaderStuct.h"
#include "BMOverflowingShaderControl.generated.h"

class ABMDynamicContainer;
class UMaterial;
class UMaterialInstanceDynamic;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMOverflowingShaderControl : public UBMMaterialShaderParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsBarrel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMOverflowingShaderStuct> Properties;
    
public:
    UBMOverflowingShaderControl();
protected:
    UFUNCTION(BlueprintCallable)
    void SetShaderProperties(ABMDynamicContainer* Container, bool InEditor);
    
    UFUNCTION()
    float GetCodeValue(EBMOverflowingShaderPropertyType PropertyType);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* AssignDefaultMaterial(UMaterial* DefaultMaterial);
    
};

