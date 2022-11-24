#pragma once
#include "CoreMinimal.h"
#include "BMInherentContaminationData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMInherentContaminationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float Value;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float ContributingValue;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float Mass;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float MaxValueRatioToLiquidVolume;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float FinalValueMultiplier;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float MinValue;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float MaxValue;
    
    FBMInherentContaminationData();
};

