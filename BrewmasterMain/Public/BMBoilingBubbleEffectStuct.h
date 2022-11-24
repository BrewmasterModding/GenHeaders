#pragma once
#include "CoreMinimal.h"
#include "EBMBoilingBubblesEffectPropertyType.h"
#include "BMPSInfo.h"
#include "BMBoilingBubbleEffectStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBoilingBubbleEffectStuct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMBoilingBubblesEffectPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMPSInfo> ParticleInfomation;
    
    FBMBoilingBubbleEffectStuct();
};

