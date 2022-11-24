#pragma once
#include "CoreMinimal.h"
#include "EBMLaceBrewingShaderPropertyType.h"
#include "BMShaderInfo.h"
#include "BMLaceBrewingShaderStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMLaceBrewingShaderStuct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EBMLaceBrewingShaderPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FBMShaderInfo> ShaderInfomation;
    
    FBMLaceBrewingShaderStuct();
};

