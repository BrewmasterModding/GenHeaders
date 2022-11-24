#pragma once
#include "CoreMinimal.h"
#include "ESizeBand.h"
#include "BMListItemTooltipData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMListItemTooltipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ESizeBand SizeBarrel;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool CriticalStat;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText StatName;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText StatDivider;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText Stat;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText Body;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool DisplayCheckmark;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool CheckmarkChecked;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool CrossmarkChecked;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool DisplayBorder;
    
    FBMListItemTooltipData();
};

