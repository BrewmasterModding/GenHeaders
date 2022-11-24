#pragma once
#include "CoreMinimal.h"
#include "EBMBoilingBubblesShaderPropertyType.h"
#include "BMShaderInfo.h"
#include "BMBoilingShaderStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBoilingShaderStuct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMBoilingBubblesShaderPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMShaderInfo> ShaderInfomation;
    
    FBMBoilingShaderStuct();
};

