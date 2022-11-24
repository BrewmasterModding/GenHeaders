#pragma once
#include "CoreMinimal.h"
#include "EBMFermentationYeastRaftShaderPropertyType.h"
#include "BMShaderInfo.h"
#include "BMFermentationYeastShaderStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMFermentationYeastShaderStuct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMFermentationYeastRaftShaderPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMShaderInfo> ShaderInfomation;
    
    FBMFermentationYeastShaderStuct();
};

