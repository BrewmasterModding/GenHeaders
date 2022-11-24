#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMContainerBrewSimFixedProperties.h"
#include "ESizeBand.h"
#include "EBMLidType.h"
#include "BMContainerItemData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMContainerItemData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FBMContainerBrewSimFixedProperties BrewSimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESizeBand SizeBand;
    
    UPROPERTY(EditDefaultsOnly)
    EBMLidType LidType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxNumberOfDirectTubeConnections;
    
    FBMContainerItemData();
};

