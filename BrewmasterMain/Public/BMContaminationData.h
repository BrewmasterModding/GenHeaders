#pragma once
#include "CoreMinimal.h"
#include "EBMInherentContaminationType.h"
#include "EBMTriggeredContaminationType.h"
#include "BMInherentContaminationData.h"
#include "BMContaminationData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMContaminationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<EBMTriggeredContaminationType, float> TriggeredContaminationData;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<EBMInherentContaminationType, FBMInherentContaminationData> InherentContaminationData;
    
    FBMContaminationData();
};

