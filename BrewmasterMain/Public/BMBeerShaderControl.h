#pragma once
#include "CoreMinimal.h"
#include "BMMaterialShaderParameters.h"
#include "EBMBeerShaderPropertyType.h"
#include "BMBeerShaderStuct.h"
#include "BMBeerProperties.h"
#include "BMBeerShaderControl.generated.h"

class ABMDynamicContainer;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UMaterialInstance;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMBeerShaderControl : public UBMMaterialShaderParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeCodeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViscosityCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViscosityCodeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClarityCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClarityCodeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadSizeCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadSizeCodeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BubblesCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BubblesCodeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadAndBubblesCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadAndBubblesCodeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float C02ReleaseCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float C02ReleaseCodeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdditionalVisualTweaksCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdditionalVisualTweaksCodeMaxValue;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FBMBeerShaderStuct> Properties;
    
public:
    UBMBeerShaderControl();
    UFUNCTION(BlueprintCallable)
    bool UpdateBrewShaderProperties(FBMBeerProperties& BeerPropertiesToUse, UMaterialInterface* MaterialToUse, UMaterialInstanceDynamic* DynamicMaterial, ABMDynamicContainer* Container);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetShaderProperties(ABMDynamicContainer* Container, bool InEditor);
    
    UFUNCTION()
    float GetCodeValue(EBMBeerShaderPropertyType PropertyType);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* AssignDefaultMaterial(UMaterialInstance* DefaultMaterial);
    
};

