#pragma once
#include "CoreMinimal.h"
#include "BMLightCurves.generated.h"

class UCurveFloat;
class UCurveLinearColor;

USTRUCT(BlueprintType)
struct FBMLightCurves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* lightIntensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveLinearColor* colorCurve;
    
    BREWMASTERMAIN_API FBMLightCurves();
};

