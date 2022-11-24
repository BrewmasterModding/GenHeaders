#pragma once
#include "CoreMinimal.h"
#include "EBMBeerShaderPropertyType.h"
#include "BMShaderInfo.h"
#include "BMBeerShaderStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBeerShaderStuct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EBMBeerShaderPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FBMShaderInfo> ShaderInfomation;
    
    FBMBeerShaderStuct();
};

