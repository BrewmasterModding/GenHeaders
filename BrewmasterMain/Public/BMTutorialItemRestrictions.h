#pragma once
#include "CoreMinimal.h"
#include "BMTutorialItemRestrictions.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMTutorialItemRestrictions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName UniqueItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 RestrictedAmount;
    
    FBMTutorialItemRestrictions();
};

