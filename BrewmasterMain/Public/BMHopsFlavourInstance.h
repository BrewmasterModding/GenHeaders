#pragma once
#include "CoreMinimal.h"
#include "BMFlavourData.h"
#include "BMHopsFlavourInstance.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMHopsFlavourInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 HopsID;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float TimeAdded;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float RemainingBoilTimeBeforeDegredation;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FBMFlavourData CurrentFlavour;
    
    FBMHopsFlavourInstance();
};

