#pragma once
#include "CoreMinimal.h"
#include "BMMaterialShaderParameters.h"
#include "BMTapLiquidShaderStuct.h"
#include "EBMTapLiquidShaderPropertyType.h"
#include "BMTapLiquidShaderControl.generated.h"

class UMaterial;
class ABMBaseTap;
class UMaterialInstanceDynamic;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMTapLiquidShaderControl : public UBMMaterialShaderParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpacityMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpacityMax;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMTapLiquidShaderStuct> Properties;
    
public:
    UBMTapLiquidShaderControl();
protected:
    UFUNCTION(BlueprintCallable)
    void SetShaderProperties(ABMBaseTap* Tap, bool InEditor);
    
    UFUNCTION()
    float GetCodeValue(EBMTapLiquidShaderPropertyType PropertyType);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* AssignDefaultMaterial(UMaterial* DefaultMaterial);
    
};

