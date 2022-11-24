#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMTapFlowDirection.h"
#include "BMTapItemData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMTapItemData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsVariableFlow;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsConnectable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsAlwaysOpen;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OpeningSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsLauter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsReversible;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EBMTapFlowDirection TapDirection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxFlowRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bShouldIgnoreYeastMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float YeastMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bShouldIgnoreParticulatesMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ParticulatesMultiplier;
    
    FBMTapItemData();
};

