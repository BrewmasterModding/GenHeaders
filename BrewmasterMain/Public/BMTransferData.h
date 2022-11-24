#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMTransferData.generated.h"

class UCurveFloat;
class UCurveVector;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMTransferData : public FTableRowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float TimeToComplete;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* MovementCurve;
    
    UPROPERTY(EditAnywhere)
    FName Socket;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* MovementOffsetCurve;
    
    UPROPERTY(EditAnywhere)
    float CurveZOffsetMaximum;
    
    UPROPERTY(EditAnywhere)
    float CurveXOffsetMaximum;
    
    UPROPERTY(EditAnywhere)
    float CurveYOffsetMaximum;
    
public:
    FBMTransferData();
};

