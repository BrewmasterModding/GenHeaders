#pragma once
#include "CoreMinimal.h"
#include "EBMFermentationYeastRaftEffectsPropertyType.h"
#include "BMPSInfo.h"
#include "BMFermantationYeastEffectStuct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMFermantationYeastEffectStuct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMFermentationYeastRaftEffectsPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMPSInfo> ParticleInfomation;
    
    FBMFermantationYeastEffectStuct();
};

