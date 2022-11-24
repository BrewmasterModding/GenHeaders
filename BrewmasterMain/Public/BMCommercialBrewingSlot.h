#pragma once
#include "CoreMinimal.h"
#include "BMPackagedBeerData.h"
#include "EBMSeasonsEnum.h"
#include "BMCommercialBrewingSlot.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMCommercialBrewingSlot {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    bool SlotFilled;
    
    UPROPERTY(SaveGame)
    FBMPackagedBeerData BeerData;
    
    UPROPERTY(SaveGame)
    EBMSeasonsEnum StartingSeason;
    
    UPROPERTY(SaveGame)
    int32 StartingSeasonNumber;
    
    UPROPERTY(SaveGame)
    float MasteryBoost;
    
    UPROPERTY(SaveGame)
    float StyleMatchBoost;
    
    UPROPERTY(SaveGame)
    float NoveltyBoost;
    
    UPROPERTY(SaveGame)
    float ContaiminationBoost;
    
    UPROPERTY(SaveGame)
    bool UnlockedProductionBoost;
    
    UPROPERTY(SaveGame)
    float ProductionBoost;
    
    UPROPERTY(SaveGame)
    TMap<int32, int32> SeasonNumberTotal;
    
    UPROPERTY(SaveGame)
    float UntappdScore;
    
    UPROPERTY(SaveGame)
    int32 UntappdReviews;
    
    FBMCommercialBrewingSlot();
};

