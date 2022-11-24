#pragma once
#include "CoreMinimal.h"
#include "BMMaterialShaderParameters.h"
#include "BMSteamShaderStuct.h"
#include "EBMSteamShaderPropertyType.h"
#include "BMSteamShaderControl.generated.h"

class ABMDynamicContainer;
class UMaterialInstanceDynamic;
class UMaterial;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMSteamShaderControl : public UBMMaterialShaderParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SteamOpacityMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SteamOpacityMax;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMSteamShaderStuct> Properties;
    
public:
    UBMSteamShaderControl();
protected:
    UFUNCTION(BlueprintCallable)
    void SetShaderProperties(ABMDynamicContainer* Container, bool InEditor);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultValues();
    
    UFUNCTION()
    float GetCodeValue(EBMSteamShaderPropertyType PropertyType);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* AssignDefaultMaterial(UMaterial* DefaultMaterial);
    
};

