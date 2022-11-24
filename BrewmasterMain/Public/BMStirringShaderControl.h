#pragma once
#include "CoreMinimal.h"
#include "BMMaterialShaderParameters.h"
#include "EBMStirringShaderPropertyType.h"
#include "BMStirringShaderStuct.h"
#include "BMStirringShaderControl.generated.h"

class ABMDynamicContainer;
class UMaterialInstanceDynamic;
class UMaterial;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMStirringShaderControl : public UBMMaterialShaderParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AmountOfGrainAndAnimationSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AmountOfGrainAndAnimationSpeedMax;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMStirringShaderStuct> Properties;
    
public:
    UBMStirringShaderControl();
protected:
    UFUNCTION(BlueprintCallable)
    void SetShaderProperties(ABMDynamicContainer* Container, bool InEditor);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultValues();
    
    UFUNCTION()
    float GetCodeValue(EBMStirringShaderPropertyType PropertyType);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* AssignDefaultMaterial(UMaterial* DefaultMaterial);
    
};

