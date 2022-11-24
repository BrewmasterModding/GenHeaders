#pragma once
#include "CoreMinimal.h"
#include "EBMOverflowingShaderPropertyType.h"
#include "BMShaderInfo.h"
#include "BMOverflowingShaderStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMOverflowingShaderStuct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMOverflowingShaderPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMShaderInfo> ShaderInfomation;
    
    FBMOverflowingShaderStuct();
};

