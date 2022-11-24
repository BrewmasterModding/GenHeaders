#pragma once
#include "CoreMinimal.h"
#include "EBMLaceBeerShaderPropertyType.h"
#include "BMShaderInfo.h"
#include "BMLaceBeerShaderStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMLaceBeerShaderStuct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EBMLaceBeerShaderPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FBMShaderInfo> ShaderInfomation;
    
    FBMLaceBeerShaderStuct();
};

