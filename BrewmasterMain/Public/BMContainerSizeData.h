#pragma once
#include "CoreMinimal.h"
#include "BMMiscData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMPourSplineCompData.h"
#include "ESizeBand.h"
#include "BMPourableCompData.h"
#include "BMOverflowData.h"
#include "BMPouringData.h"
#include "BMContainerSizeData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMContainerSizeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    ESizeBand ContainerSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMPourableCompData PourComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FBMPourSplineCompData LiquidPouringSpline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FBMPourSplineCompData GrainPouringSpline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FBMOverflowData OverflowData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FBMPouringData PouringData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FBMMiscData MiscData;
    
    FBMContainerSizeData();
};

