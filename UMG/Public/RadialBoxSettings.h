#pragma once
#include "CoreMinimal.h"
#include "RadialBoxSettings.generated.h"

USTRUCT(BlueprintType)
struct FRadialBoxSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartingAngle;
    
    UPROPERTY(EditAnywhere)
    bool bDistributeItemsEvenly;
    
    UPROPERTY(EditAnywhere)
    float AngleBetweenItems;
    
    UPROPERTY(EditAnywhere)
    float SectorCentralAngle;
    
    UMG_API FRadialBoxSettings();
};

