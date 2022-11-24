#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BMPSVectorInfo.generated.h"

class UCurveLinearColor;
class UCurveVector;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPSVectorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName VectorParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsVectorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveLinearColor* CurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveVector* VectorCurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OverrideCodeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RandomizationToOutputVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor RandomizationToOutputColor;
    
    FBMPSVectorInfo();
};

