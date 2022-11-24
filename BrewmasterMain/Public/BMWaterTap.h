#pragma once
#include "CoreMinimal.h"
#include "BMBaseTap.h"
#include "BMWaterTap.generated.h"

UCLASS()
class BREWMASTERMAIN_API ABMWaterTap : public ABMBaseTap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaterTemperature;
    
    ABMWaterTap();
protected:
    UFUNCTION()
    void AddWater();
    
};

