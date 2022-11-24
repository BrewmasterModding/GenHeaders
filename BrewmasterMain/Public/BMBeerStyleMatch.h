#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMBeerStyle.h"
#include "EBeerStyleSpeciality.h"
#include "BMBeerStyleMatch.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBeerStyleMatch : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FBMBeerStyle BeerStyle;
    
    UPROPERTY(SaveGame)
    float KeyBeerStatPoints;
    
    UPROPERTY(SaveGame)
    float FlavourInfluencesPoints;
    
    UPROPERTY(SaveGame)
    TArray<EBeerStyleSpeciality> PossibleSpecialities;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TArray<FString> StatsMatched;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TArray<FString> StatsNotMatched;
    
    FBMBeerStyleMatch();
};

