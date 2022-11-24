#pragma once
#include "CoreMinimal.h"
#include "EBMStirringEffectPropertyType.h"
#include "BMPSInfo.h"
#include "BMStirringEffectStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMStirringEffectStuct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMStirringEffectPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMPSInfo> ParticleInfomation;
    
    FBMStirringEffectStuct();
};

