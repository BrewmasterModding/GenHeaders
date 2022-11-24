#pragma once
#include "CoreMinimal.h"
#include "EBMLiquidPouringEffectPropertyType.h"
#include "BMPSInfo.h"
#include "BMLiquidPouringEffectStruct.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMLiquidPouringEffectStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMLiquidPouringEffectPropertyType Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideCodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideCodePropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMPSInfo> ParticleInfomation;
    
    FBMLiquidPouringEffectStruct();
};

