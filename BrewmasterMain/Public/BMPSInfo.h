#pragma once
#include "CoreMinimal.h"
#include "BMScalarInfo.h"
#include "BMPSVectorInfo.h"
#include "BMPSInfo.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPSInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMScalarInfo> ShaderScalarParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMPSVectorInfo> ShaderVectorParameters;
    
    FBMPSInfo();
};

