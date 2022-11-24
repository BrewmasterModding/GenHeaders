#pragma once
#include "CoreMinimal.h"
#include "BMShaderInfo.h"
#include "EBMSteamShaderPropertyType.h"
#include "BMSteamShaderStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMSteamShaderStuct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMSteamShaderPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMShaderInfo> ShaderInfomation;
    
    FBMSteamShaderStuct();
};

