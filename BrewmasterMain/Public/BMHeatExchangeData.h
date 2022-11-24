#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ESizeBand.h"
#include "EHeatExchangeType.h"
#include "BMHeatExchangeData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMHeatExchangeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool bActive;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float TargetTemperature;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float Wattage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EHeatExchangeType HeatExchangeType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool bIsExternal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool bIsHeatMat;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    ESizeBand MinimumContainerSize;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FName ItemName;
    
    FBMHeatExchangeData();
};

