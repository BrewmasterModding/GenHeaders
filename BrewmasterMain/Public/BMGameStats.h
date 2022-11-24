#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "EBMMastery.h"
#include "BMPackagingAssetsData.h"
#include "BMSaveableActorInterface.h"
#include "BMCommercialBrewingSlot.h"
#include "EBMSponsor.h"
#include "BMReputationData.h"
#include "EBMRecipeBatchSize.h"
#include "EBMBeerCategory.h"
#include "EBMDistribution.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EBMRecipeDifficulty.h"
#include "EBMReputation.h"
#include "EBMSeasonsEnum.h"
#include "BMGameStats.generated.h"

UCLASS()
class BREWMASTERMAIN_API ABMGameStats : public AInfo, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    TMap<EBMSponsor, FBMReputationData> BreweryReputation;
    
    UPROPERTY(SaveGame)
    TMap<EBMSponsor, FBMCommercialBrewingSlot> CommercialBrewingSlots;
    
    UPROPERTY(SaveGame)
    bool bGameInitalisedBefore;
    
    UPROPERTY(SaveGame)
    TArray<FBMPackagingAssetsData> UnlockedPackagingAssets;
    
    UPROPERTY(SaveGame)
    EBMMastery PlayerMasteryLevel;
    
    UPROPERTY(SaveGame)
    EBMMastery PlayerMasteryLevelAtBeginingOfSeason;
    
    UPROPERTY(SaveGame)
    int32 MasteryPoints;
    
    UPROPERTY(SaveGame)
    EBMRecipeBatchSize MaximumBrewableBatchSize;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    int32 BeerTokens;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    int32 LifetimeBeerTokens;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    int32 SeasonalBeerTokens;
    
    UPROPERTY(SaveGame)
    bool bBeerTokensInfinite;
    
    UPROPERTY(SaveGame)
    FName LastMadeBeer;
    
    UPROPERTY(SaveGame)
    TMap<EBMBeerCategory, bool> BeerCategoryBrewed;
    
    UPROPERTY(SaveGame)
    TMap<FName, bool> BeerStyleBrewed;
    
    UPROPERTY(SaveGame)
    TArray<FName> GoldInCompetition;
    
    UPROPERTY(SaveGame)
    int32 NumberOfJobCompleted;
    
    UPROPERTY(SaveGame)
    float HighestUnTappdRating;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMDistribution, int32> BaseDistributionTokens;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMMastery, float> MasteryProductionBoost;
    
    UPROPERTY(EditDefaultsOnly)
    float StyleMatchBoost;
    
    UPROPERTY(EditDefaultsOnly)
    float BoostContaminationPercent;
    
    UPROPERTY(EditDefaultsOnly)
    float ContaminationThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FVector2D, FName> BeerQualityText;
    
    UPROPERTY(EditDefaultsOnly)
    FName DefaultBeerQualityText;
    
    UPROPERTY(EditDefaultsOnly)
    float ProductionBoost;
    
    UPROPERTY(EditDefaultsOnly)
    float StartingNoveltyBoost;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D NoveltyBoostRange;
    
    UPROPERTY(EditDefaultsOnly)
    float BoostMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float SalesBonusScore;
    
    UPROPERTY(EditDefaultsOnly)
    float IBUScore;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxFlavourStength;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxFlavourAltStength;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxFlavourScore;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxFlavourAltScore;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FVector2D, float> StyleMatchScore;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMRecipeDifficulty, float> StyleDiffcultyScore;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D RatingFluctuation;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxRatingScore;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMDistribution, float> DistributionScore;
    
    UPROPERTY(EditDefaultsOnly)
    float ProductionBoostUnlockedBonus;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D RandomRangeFluctuation;
    
    UPROPERTY(EditDefaultsOnly)
    float BeerRatingConstant;
    
public:
    ABMGameStats();
    UFUNCTION(BlueprintCallable)
    void UpdatedSeasonStartMastery();
    
    UFUNCTION(BlueprintCallable)
    void SetReputationLevel(EBMSponsor Brewery, EBMReputation ReputationLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberOfBeerTokens(int32 NumberOfTokens);
    
    UFUNCTION(BlueprintCallable)
    void SetMasteryLevel(EBMMastery NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetInfiniteBeerTokens(bool IsInfinite);
    
    UFUNCTION(BlueprintCallable)
    void ResetSeasonalTokens(EBMSeasonsEnum CurrentSeason);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBeerTokens(int32 NumberToRemove);
    
    UFUNCTION(BlueprintCallable)
    void AddBeerTokens(int32 NumberToAdd);
    
    
    // Fix for true pure virtual functions not being implemented
};

