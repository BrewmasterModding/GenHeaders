#pragma once
#include "CoreMinimal.h"
#include "BMRampMeshShaderStuct.h"
#include "BMMaterialShaderParameters.h"
#include "BMSingleVolumeState.h"
#include "EBMRampMeshShaderPropertyType.h"
#include "BMRampMeshShaderControl.generated.h"

class ABMDynamicContainer;
class UMaterialInstanceDynamic;
class UMaterial;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMRampMeshShaderControl : public UBMMaterialShaderParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpacityMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpacityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadAndBubblesMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadAndBubblesMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdditionalVisualTweaksMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdditionalVisualTweaksMax;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FBMRampMeshShaderStuct> Properties;
    
public:
    UBMRampMeshShaderControl();
    UFUNCTION(BlueprintCallable)
    bool UpdateBrewShaderProperties(FBMSingleVolumeState State, ABMDynamicContainer* Container);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetShaderProperties(ABMDynamicContainer* Container, bool InEditor);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultValues();
    
    UFUNCTION()
    float GetCodeValue(EBMRampMeshShaderPropertyType PropertyType);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* AssignDefaultMaterial(UMaterial* DefaultMaterial);
    
};

