#pragma once
#include "CoreMinimal.h"
#include "BMMaterialShaderParameters.h"
#include "BMBoilingShaderStuct.h"
#include "EBMBoilingBubblesShaderPropertyType.h"
#include "BMBolingBubblesShaderControl.generated.h"

class ABMDynamicContainer;
class UMaterialInstanceDynamic;
class UMaterialInstance;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMBolingBubblesShaderControl : public UBMMaterialShaderParameters {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMBoilingShaderStuct> Properties;
    
public:
    UBMBolingBubblesShaderControl();
protected:
    UFUNCTION(BlueprintCallable)
    void SetShaderProperties(ABMDynamicContainer* Container, bool InEditor);
    
    UFUNCTION()
    float GetCodeValue(EBMBoilingBubblesShaderPropertyType PropertyType);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* AssignDefaultMaterial(UMaterialInstance* DefaultMaterial);
    
};

