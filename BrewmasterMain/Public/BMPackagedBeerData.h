#pragma once
#include "CoreMinimal.h"
#include "BMBeerProperties.h"
#include "BMBeerStyleMatch.h"
#include "BMPackagedBeerData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPackagedBeerData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    bool bIsPackaged;
    
    UPROPERTY(SaveGame)
    FName OriginalContainerID;
    
    UPROPERTY(SaveGame)
    FBMBeerProperties BeerProperties;
    
    UPROPERTY(SaveGame)
    FBMBeerStyleMatch MatchingBeerStyle;
    
    UPROPERTY(SaveGame)
    FString BeerName;
    
    UPROPERTY(SaveGame)
    FName BeerBottleID;
    
    UPROPERTY(SaveGame)
    FName BeerGlassID;
    
    UPROPERTY(SaveGame)
    FName BeerLabelID;
    
    UPROPERTY(SaveGame)
    float Temperature;
    
    UPROPERTY(SaveGame)
    int32 LastContainerID;
    
    UPROPERTY(SaveGame)
    TMap<FString, FString> SubmittedToLoc;
    
    FBMPackagedBeerData();
};

