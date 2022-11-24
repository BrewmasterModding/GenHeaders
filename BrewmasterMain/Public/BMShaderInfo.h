#pragma once
#include "CoreMinimal.h"
#include "BMScalarInfo.h"
#include "BMVectorInfo.h"
#include "BMShaderInfo.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMShaderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMScalarInfo> ShaderScalarParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMVectorInfo> ShaderVectorParameters;
    
    FBMShaderInfo();
};

