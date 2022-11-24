#pragma once
#include "CoreMinimal.h"
#include "EBMItemUnlockType.h"
#include "BMUniqueReward.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMUniqueReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName ItemId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    EBMItemUnlockType UnlockItemType;
    
    UPROPERTY(SaveGame)
    bool MetValidation;
    
    FBMUniqueReward();
};

