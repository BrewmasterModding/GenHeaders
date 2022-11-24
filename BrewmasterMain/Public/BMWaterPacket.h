#pragma once
#include "CoreMinimal.h"
#include "BMWaterPacket.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMWaterPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Temperature;
    
    FBMWaterPacket();
};

