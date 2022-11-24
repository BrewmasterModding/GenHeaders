#pragma once
#include "CoreMinimal.h"
#include "BMMaterialShaderParameters.h"
#include "BMFermentationYeastShaderStuct.h"
#include "EBMFermentationYeastRaftShaderPropertyType.h"
#include "BMFermantationYeastShaderControl.generated.h"

class ABMDynamicContainer;
class UMaterial;
class UMaterialInstanceDynamic;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMFermantationYeastShaderControl : public UBMMaterialShaderParameters {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMFermentationYeastShaderStuct> Properties;
    
public:
    UBMFermantationYeastShaderControl();
protected:
    UFUNCTION(BlueprintCallable)
    void SetShaderProperties(ABMDynamicContainer* Container, bool InEditor);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultValues();
    
    UFUNCTION()
    float GetCodeValue(EBMFermentationYeastRaftShaderPropertyType PropertyType);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* AssignDefaultMaterial(UMaterial* DefaultMaterial);
    
};

