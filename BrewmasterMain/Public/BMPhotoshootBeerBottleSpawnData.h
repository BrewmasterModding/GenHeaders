#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BMPhotoshootBeerBottleSpawnData.generated.h"

class ABMBaseBeerBottle;

USTRUCT(BlueprintType)
struct FBMPhotoshootBeerBottleSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ABMBaseBeerBottle> BeerBottleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SpawnScale;
    
    BREWMASTERMAIN_API FBMPhotoshootBeerBottleSpawnData();
};

