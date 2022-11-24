#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "BMSaveGameData.h"
#include "EBMSeasonsEnum.h"
#include "EBMGameType.h"
#include "BMSaveGame.generated.h"

UCLASS()
class BREWMASTERMAIN_API UBMSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 SaveVersion;
    
    UPROPERTY(VisibleAnywhere)
    FString SaveSlotName;
    
    UPROPERTY(VisibleAnywhere)
    FString SaveDisplayName;
    
    UPROPERTY(VisibleAnywhere)
    FDateTime SaveDateTime;
    
    UPROPERTY(VisibleAnywhere)
    uint32 UserIndex;
    
    UPROPERTY(VisibleAnywhere)
    FString CampaignName;
    
    UPROPERTY(VisibleAnywhere)
    uint32 CampaignSlot;
    
    UPROPERTY(VisibleAnywhere)
    FString PlayerUniqueID;
    
    UPROPERTY(VisibleAnywhere)
    FBMSaveGameData GameData;
    
    UPROPERTY(VisibleAnywhere)
    FString Activity;
    
    UPROPERTY(VisibleAnywhere)
    FString PinnedRecipe;
    
    UPROPERTY(VisibleAnywhere)
    bool LocalisePinnedRecipe;
    
    UPROPERTY(VisibleAnywhere)
    FString LastBeerCreated;
    
    UPROPERTY(VisibleAnywhere)
    EBMSeasonsEnum Season;
    
    UPROPERTY(VisibleAnywhere)
    int32 Day;
    
    UPROPERTY(VisibleAnywhere)
    int32 Year;
    
    UPROPERTY(VisibleAnywhere)
    int32 MasteryLevel;
    
    UPROPERTY(VisibleAnywhere)
    int32 BeerTokens;
    
    UPROPERTY(VisibleAnywhere)
    EBMGameType GameType;
    
    UBMSaveGame();
};

