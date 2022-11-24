#pragma once
#include "CoreMinimal.h"
#include "BMPackagedBeerData.h"
#include "BMCellarProperties.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMCellarProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FBMPackagedBeerData BeerData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName ContainerName;
    
    FBMCellarProperties();
};

