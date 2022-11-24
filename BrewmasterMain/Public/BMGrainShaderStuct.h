#pragma once
#include "CoreMinimal.h"
#include "EBMGrainShaderPropertyType.h"
#include "BMShaderInfo.h"
#include "BMGrainShaderStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMGrainShaderStuct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EBMGrainShaderPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FBMShaderInfo> ShaderInfomation;
    
    FBMGrainShaderStuct();
};

