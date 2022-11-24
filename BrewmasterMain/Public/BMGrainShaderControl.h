#pragma once
#include "CoreMinimal.h"
#include "BMMaterialShaderParameters.h"
#include "BMGrainShaderStuct.h"
#include "BMSingleVolumeState.h"
#include "EBMGrainShaderPropertyType.h"
#include "BMGrainShaderControl.generated.h"

class ABMDynamicContainer;
class ABMBaseIngredientPacket;
class UMaterialInstanceDynamic;
class UMaterial;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMGrainShaderControl : public UBMMaterialShaderParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GrainColourAdditionalWetnessTintMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GrainColourAdditionalWetnessTintMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringMoundGenerationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringMoundGenerationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringMoundRemovalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringMoundRemovalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringVisualTweaksMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringVisualTweaksMax;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FBMGrainShaderStuct> Properties;
    
public:
    UBMGrainShaderControl();
    UFUNCTION(BlueprintCallable)
    void UpdateBrewShaderPropertiesPacket(ABMBaseIngredientPacket* Packet);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateBrewShaderProperties(FBMSingleVolumeState State, ABMDynamicContainer* Container);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetShaderProperties(ABMDynamicContainer* Container, ABMBaseIngredientPacket* Packet, bool InEditor);
    
    UFUNCTION()
    float GetCodeValuePacket(EBMGrainShaderPropertyType PropertyType, ABMBaseIngredientPacket* Packet);
    
    UFUNCTION()
    float GetCodeValue(EBMGrainShaderPropertyType PropertyType, ABMDynamicContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* AssignDefaultMaterial(UMaterial* DefaultMaterial);
    
};

