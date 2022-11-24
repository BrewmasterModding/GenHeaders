#pragma once
#include "CoreMinimal.h"
#include "BMMaterialShaderParameters.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "BMLaceBrewingShaderStuct.h"
#include "BMSingleVolumeState.h"
#include "EBMLaceBrewingShaderPropertyType.h"
#include "BMLaceBrewingShaderControl.generated.h"

class ABMDynamicContainer;
class UMaterialInstanceDynamic;
class UMaterialInstance;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMLaceBrewingShaderControl : public UBMMaterialShaderParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrustyDryLaceMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrustyDryLaceMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LaceTopHeightMaskMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FermentationLaceVisualsMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FermentationLaceVisualsMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringVisualTweaksMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringVisualTweaksMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpacityFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpacityFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpacityHeadHeightHeadOffsetMinimum;
    
    UPROPERTY()
    FTimerHandle OpacityTimer;
    
    UPROPERTY()
    FTimerHandle OpacityFadeOutTimer;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FBMLaceBrewingShaderStuct> Properties;
    
public:
    UBMLaceBrewingShaderControl();
    UFUNCTION(BlueprintCallable)
    bool UpdateBrewShaderProperties(FBMSingleVolumeState State, ABMDynamicContainer* Container);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetShaderProperties(ABMDynamicContainer* Container, bool InEditor);
    
public:
    UFUNCTION()
    void IncrementOpacity();
    
protected:
    UFUNCTION()
    float GetCodeValue(EBMLaceBrewingShaderPropertyType PropertyType);
    
public:
    UFUNCTION()
    void DeincrementOpacity();
    
protected:
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* AssignDefaultMaterial(UMaterialInstance* DefaultMaterial);
    
};

