#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BMVectorInfo.generated.h"

class UCurveLinearColor;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMVectorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName VectorParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveLinearColor* CurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveLinearColor* CurveAsset_DefaultLit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OverrideCodeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor RandomizationToOutput;
    
    FBMVectorInfo();
};

