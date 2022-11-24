#pragma once
#include "CoreMinimal.h"
#include "BMMaterialShaderParameters.h"
#include "BMBeerProperties.h"
#include "BMLaceBeerShaderStuct.h"
#include "EBMLaceBeerShaderPropertyType.h"
#include "BMBeerLaceShaderControl.generated.h"

class ABMDynamicContainer;
class UMaterialInterface;
class UTexture2D;
class UMaterialInstanceDynamic;
class UMaterialInstance;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMBeerLaceShaderControl : public UBMMaterialShaderParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LaceTopHeightMaskMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LaceBottomHeightMaskMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UTexture2D>> SmallHeadTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UTexture2D>> MediumHeadTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UTexture2D>> LargeHeadTexture;
    
    UPROPERTY()
    TSoftObjectPtr<UTexture2D> SelectedLaceTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpacityHeadHeightHeadOffsetMinimum;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FBMLaceBeerShaderStuct> Properties;
    
public:
    UBMBeerLaceShaderControl();
    UFUNCTION(BlueprintCallable)
    bool UpdateBrewShaderProperties(FBMBeerProperties& State, UMaterialInterface* MaterialToUse, UMaterialInstanceDynamic* DynamicMaterial, ABMDynamicContainer* Container);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetShaderProperties(ABMDynamicContainer* Container, bool InEditor);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLaceTextureToUse(float HeadAmount);
    
protected:
    UFUNCTION()
    float GetCodeValue(EBMLaceBeerShaderPropertyType PropertyType);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* AssignDefaultMaterial(UMaterialInstance* DefaultMaterial);
    
};

