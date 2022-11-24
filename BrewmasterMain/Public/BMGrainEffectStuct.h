#pragma once
#include "CoreMinimal.h"
#include "EBMGrainEffectPropertyType.h"
#include "BMPSInfo.h"
#include "BMGrainEffectStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMGrainEffectStuct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMGrainEffectPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMPSInfo> ParticleInfomation;
    
    FBMGrainEffectStuct();
};

