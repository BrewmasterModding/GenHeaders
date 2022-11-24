#pragma once
#include "CoreMinimal.h"
#include "BMShaderInfo.h"
#include "EBMStirringShaderPropertyType.h"
#include "BMStirringShaderStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMStirringShaderStuct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMStirringShaderPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMShaderInfo> ShaderInfomation;
    
    FBMStirringShaderStuct();
};

