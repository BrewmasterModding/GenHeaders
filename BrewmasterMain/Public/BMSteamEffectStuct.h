#pragma once
#include "CoreMinimal.h"
#include "EBMSteamEffectPropertyType.h"
#include "BMPSInfo.h"
#include "BMSteamEffectStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMSteamEffectStuct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMSteamEffectPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMPSInfo> ParticleInfomation;
    
    FBMSteamEffectStuct();
};

