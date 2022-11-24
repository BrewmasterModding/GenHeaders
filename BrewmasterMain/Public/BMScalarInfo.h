#pragma once
#include "CoreMinimal.h"
#include "BMScalarInfo.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMScalarInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ScalarParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* CurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* CurveAsset_DefaultLit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsTextureSpeedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OverrideCodeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomizationToOutput;
    
    FBMScalarInfo();
};

