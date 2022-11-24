#pragma once
#include "CoreMinimal.h"
#include "BMMaterialShaderParameters.h"
#include "BMBrewingShaderStuct.h"
#include "EBMBrewingShaderPropertyType.h"
#include "BMBrewingShaderControl.generated.h"

class ABMDynamicContainer;
class UTexture2D;
class ABMBaseIngredientPacket;
class UMaterialInstanceDynamic;
class UMaterial;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMBrewingShaderControl : public UBMMaterialShaderParameters {
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
    float BoilingCodeValueMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BoilingCodeValueMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadAndBubblesCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadAndBubblesCodeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BubblesFromRecievingPourCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BubblesFromRecievingPourCodeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SedimentMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SedimentMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SurfaceYeastRaftMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SurfaceYeastRaftMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GrainSuspensionMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GrainSuspensionMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringVisualTweaksMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringVisualTweaksMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YeastPopulationMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YeastPopulationMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YeastActivityMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YeastActivityMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WortBoilCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WortBoilCodeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WortBoilMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LingeringBubblesCodeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LingeringBubblesCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ParticulatesCodeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ParticulatesCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AgitationCodeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AgitationCodeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LingeringBubblesCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LingeringBubblesProteinCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WortBoilProteinCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThresholdForFoam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxHeadRaisePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLiquidColourRateOfChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLiquidColourRateOfChangeFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UTexture2D>> YeastRaftTextures;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMBrewingShaderStuct> Properties;
    
public:
    UBMBrewingShaderControl();
protected:
    UFUNCTION(BlueprintCallable)
    void SetShaderProperties(ABMDynamicContainer* Container, ABMBaseIngredientPacket* Packet, bool InEditor);
    
public:
    UFUNCTION()
    bool HasFoamHeadAppeared();
    
    UFUNCTION(BlueprintCallable)
    float GetMaxPercentForHeadRise();
    
protected:
    UFUNCTION()
    float GetCodeValuePacket(EBMBrewingShaderPropertyType PropertyType, ABMBaseIngredientPacket* Packet);
    
    UFUNCTION()
    float GetCodeValue(EBMBrewingShaderPropertyType PropertyType, ABMDynamicContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* AssignDefaultMaterial(UMaterial* DefaultMaterial);
    
};

