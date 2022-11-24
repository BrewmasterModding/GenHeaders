#pragma once
#include "CoreMinimal.h"
#include "EBMBeerBubblesEffectPropertyType.h"
#include "BMPSInfo.h"
#include "BMBeerBubblesEffectStruct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBeerBubblesEffectStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMBeerBubblesEffectPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMPSInfo> ParticleInfomation;
    
    FBMBeerBubblesEffectStruct();
};

