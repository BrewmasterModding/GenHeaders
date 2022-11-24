#pragma once
#include "CoreMinimal.h"
#include "BMSaveGameData_ActorSaveData_Pointers.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMSaveGameData_ActorSaveData_Pointers {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, uint32> LocalToGlobalIDMap;
    
    FBMSaveGameData_ActorSaveData_Pointers();
};

