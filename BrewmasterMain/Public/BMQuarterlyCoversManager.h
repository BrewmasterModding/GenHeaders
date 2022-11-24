#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMSaveableActorInterface.h"
#include "EBMSeasonsEnum.h"
#include "BMQuarterlyCoversManager.generated.h"

class UTexture2D;

UCLASS()
class BREWMASTERMAIN_API ABMQuarterlyCoversManager : public AInfo, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    FString ChosenSeasonString;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMSeasonsEnum, FString> SeasonEditionLoc;
    
    UPROPERTY(SaveGame)
    FString ChosenRecipeLine;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FString> PossibleRecipeFramingLoc;
    
    UPROPERTY(SaveGame)
    FString ChosenJobLine;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FString> PossibleJobFramingLoc;
    
    UPROPERTY(SaveGame)
    FString CompetitionLine;
    
    UPROPERTY(EditDefaultsOnly)
    FString CompetitionStartLoc;
    
    UPROPERTY(EditDefaultsOnly)
    FString CompetitionEndLoc;
    
    UPROPERTY(SaveGame)
    bool NewItemsToBuy;
    
    UPROPERTY(SaveGame)
    FString LastQuarterlyStyle;
    
    UPROPERTY(SaveGame)
    TSoftObjectPtr<UTexture2D> CoverAsset;
    
public:
    ABMQuarterlyCoversManager();
    
    // Fix for true pure virtual functions not being implemented
};

