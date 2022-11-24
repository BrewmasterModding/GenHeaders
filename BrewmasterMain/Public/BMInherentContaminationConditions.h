#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMConditions.h"
#include "EBMInherentContaminationType.h"
#include "BMInherentContaminationConditions.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMInherentContaminationConditions : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    EBMInherentContaminationType ContaminationType;
    
    UPROPERTY(EditAnywhere, SaveGame)
    float MinValue;
    
    UPROPERTY(EditAnywhere, SaveGame)
    float MaxValue;
    
    UPROPERTY(EditAnywhere, SaveGame)
    float MaxValueRatioToLiquidVolume;
    
    UPROPERTY(EditAnywhere, SaveGame)
    float RateOfChange;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<FBMConditions> InherentConditions;
    
    FBMInherentContaminationConditions();
};

