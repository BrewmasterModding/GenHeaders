#pragma once
#include "CoreMinimal.h"
#include "BMIngredientPacket.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIngredientPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName UniqueIngredientType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Temperature;
    
    FBMIngredientPacket();
};

