#pragma once
#include "CoreMinimal.h"
#include "BMInstanceList.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMInstanceList {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<int32> InstanceIDs;
    
    FBMInstanceList();
};

