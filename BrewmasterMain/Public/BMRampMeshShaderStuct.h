#pragma once
#include "CoreMinimal.h"
#include "EBMRampMeshShaderPropertyType.h"
#include "BMShaderInfo.h"
#include "BMRampMeshShaderStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMRampMeshShaderStuct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EBMRampMeshShaderPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FBMShaderInfo> ShaderInfomation;
    
    FBMRampMeshShaderStuct();
};

