#pragma once
#include "CoreMinimal.h"
#include "BMPlayerOwnershipData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPlayerOwnershipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool IsInfinite;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 NumberStored;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 TotalOwned;
    
    FBMPlayerOwnershipData();
};

