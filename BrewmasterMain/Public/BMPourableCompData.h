#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BMPourableCompData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPourableCompData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IncreaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecreaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringMaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* PouringMaxHeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringAreaRotationChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LiquidTransferScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PourSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThrottlePourArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThrottleAbovePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MiniumPourSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdditionalYawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LockToAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CollisionPadding;
    
    FBMPourableCompData();
};

