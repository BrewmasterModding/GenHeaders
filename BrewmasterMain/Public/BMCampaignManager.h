#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMJobData.h"
#include "EBMMastery.h"
#include "BMSaveableActorInterface.h"
#include "EBMSponsor.h"
#include "BMPackagedBeerData.h"
#include "BMRecipeData.h"
#include "ESizeBand.h"
#include "EBMRankings.h"
#include "BMCompetitionAwardRank.h"
#include "EBMRecipeDifficulty.h"
#include "EBMSeasonsEnum.h"
#include "EBMStoryCharacter.h"
#include "BMNarrativeObjective.h"
#include "EBMReputation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EBMGameType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BMCampaignManager.generated.h"

class ABMTimeController;
class ABMConditionsManager;
class AActor;

UCLASS()
class BREWMASTERMAIN_API ABMCampaignManager : public AInfo, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, SaveGame)
    EBMMastery StartingMastery;
    
    UPROPERTY(SaveGame)
    bool StartingMasteryAlreadySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UnlockAllRecipes;
    
protected:
    UPROPERTY(SaveGame)
    bool bFirstTimeRunning;
    
    UPROPERTY(SaveGame)
    TArray<FName> CompletedJobs;
    
    UPROPERTY(SaveGame)
    TArray<FName> JobsCompletedThisSeason;
    
    UPROPERTY(SaveGame)
    TArray<FName> JobsStartedLastSeason;
    
    UPROPERTY(SaveGame)
    TArray<FBMJobData> CurrentJobData;
    
    UPROPERTY(SaveGame)
    FName CurrentSelectedTaskName;
    
    UPROPERTY(SaveGame)
    FName CurrentTrackedJob;
    
    UPROPERTY(SaveGame)
    TArray<FName> ForceSpawnOnceJobSpawned;
    
    UPROPERTY(SaveGame)
    TArray<FName> CompletedNarrativeStagesThisSeason;
    
    UPROPERTY(SaveGame)
    TArray<FName> CompletedNarrativeStages;
    
    UPROPERTY(SaveGame)
    TArray<FName> UncompleteNarrativeStages;
    
    UPROPERTY(SaveGame)
    TArray<FBMPackagedBeerData> AllPackagedBeerData;
    
    UPROPERTY(SaveGame)
    TArray<FBMPackagedBeerData> PackagedBeerDataThisSeason;
    
    UPROPERTY(SaveGame)
    TArray<FBMPackagedBeerData> SubmittedPackagedBeerData;
    
    UPROPERTY(SaveGame)
    TArray<FBMPackagedBeerData> AllTimeSubmittedBeers;
    
    UPROPERTY(SaveGame)
    TMap<FName, FBMPackagedBeerData> BeerForNarrativeData;
    
    UPROPERTY(SaveGame)
    TArray<EBMSponsor> MetBrewery;
    
    UPROPERTY(SaveGame)
    FBMRecipeData CurrentPinnedRecipe;
    
    UPROPERTY(SaveGame)
    ESizeBand CurrentPinnedRecipeBatchSize;
    
    UPROPERTY(SaveGame)
    int32 CurrentRecipeInstructionStep;
    
    UPROPERTY(SaveGame)
    TArray<FString> SeenRecipes;
    
    UPROPERTY(SaveGame)
    TArray<FString> CurrentRecipes;
    
    UPROPERTY(SaveGame)
    TArray<FString> IngredientShopValidationOverride;
    
    UPROPERTY(SaveGame)
    TArray<FName> LastUnlockedRecipes;
    
    UPROPERTY(SaveGame)
    bool bCompetitionsCanGenerate;
    
    UPROPERTY(SaveGame)
    FName CurrentCompetition;
    
    UPROPERTY(SaveGame)
    bool bHasCompetitionGenerated;
    
    UPROPERTY(SaveGame)
    TMap<FName, EBMRankings> EnteredCompetitions;
    
    UPROPERTY(SaveGame)
    FName LastYearsCompetiton;
    
    UPROPERTY(SaveGame)
    bool bHasCompetitionBeerSubmitted;
    
    UPROPERTY(SaveGame)
    FBMPackagedBeerData SubmittedCompetitionBeer;
    
    UPROPERTY(SaveGame)
    FName SubmittedCompetitionBeerContainerName;
    
    UPROPERTY(SaveGame)
    bool CompetitonTakenPartIn;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMRankings, FBMCompetitionAwardRank> CompetitionsRankingData;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMRecipeDifficulty, int32> BeerDifficultyScore;
    
    UPROPERTY(SaveGame)
    TArray<FName> CurrentNarrativeStages;
    
    UPROPERTY(SaveGame)
    TArray<FName> NarrativeStageToIntroduce;
    
    UPROPERTY(SaveGame)
    TArray<FName> NarrativeStageEndNote;
    
    UPROPERTY(SaveGame)
    bool SeenBrewersQuarterlyThisSeason;
    
    UPROPERTY(SaveGame)
    TArray<EBMStoryCharacter> MetStoryCharacters;
    
    UPROPERTY(SaveGame)
    TMap<FName, FBMNarrativeObjective> NarrativeCompletionList;
    
    UPROPERTY()
    ABMConditionsManager* ConditionsManager;
    
    UPROPERTY()
    ABMTimeController* TimeController;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMConditionsManager> ConditionsManagerClass;
    
    UPROPERTY(SaveGame)
    bool bShowLevelUpScreen;
    
    UPROPERTY(SaveGame)
    EBMMastery MasteryToLevelUp;
    
    UPROPERTY(SaveGame)
    int32 LevelUpPoints;
    
    UPROPERTY(SaveGame)
    bool bShowReputationLevelUpScreen;
    
    UPROPERTY(SaveGame)
    EBMSponsor SponsorToLevelUp;
    
    UPROPERTY(SaveGame)
    EBMReputation ReputationToLevelUp;
    
    UPROPERTY(SaveGame)
    int32 ReputationLevelUpPoints;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform QuaterlySpawnPos;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> QuarterlyClass;
    
    UPROPERTY(SaveGame)
    TArray<FName> UnlockedArticles;
    
    UPROPERTY(SaveGame)
    TArray<FName> GeneratedSeasonArticles;
    
    UPROPERTY()
    TArray<FBMPackagedBeerData> BeerDataToRemove;
    
    UPROPERTY(SaveGame)
    bool SeenQuaterlyCoverThisSeason;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NumberOfJobsASeason;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NumberOfRecipesASeason;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NumberOfArticlesASeason;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MasteryPriorityPoints;
    
    UPROPERTY(EditDefaultsOnly)
    int32 UniquePriorityPoints;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SpawnOncePriorityPoints;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NarrativePriorityPoints;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ValidPriorityPoints;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ReputationPriorityPoints;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DifficultyPriorityPoints;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NotUnlockedBeforePriorityPoints;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MatchBeerCategory;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MatchRecipeCategory;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MatchJobCategory;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MatchCompetitionCategory;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MatchIngredientCategory;
    
    UPROPERTY(SaveGame)
    bool bShownDemoCompleteScreen;
    
    UPROPERTY(SaveGame)
    EBMGameType GameSaveType;
    
    UPROPERTY(SaveGame)
    bool bHasOpenedBrewersQuarterly;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D AdditionalObjectivePadding;
    
public:
    ABMCampaignManager();
protected:
    UFUNCTION(BlueprintCallable)
    void MergeCompletedNarrativeFromSeason();
    
public:
    UFUNCTION()
    void LevelReturnCall();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetCurrentNarrativeStages();
    
    UFUNCTION(BlueprintCallable)
    TArray<FBMJobData> GetCurrentlyGeneratedJobs();
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetAllNarrativeData();
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FBMJobData> GetAllJobData();
    
    UFUNCTION(BlueprintCallable)
    void GenerateSeasonTasks(EBMSeasonsEnum CurrentSeason);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GenerateNewRecipes();
    
public:
    UFUNCTION(BlueprintCallable)
    void GenerateNewJobs();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GenerateCompetition();
    
public:
    UFUNCTION(BlueprintCallable)
    void GenerateAfterLoading();
    
    UFUNCTION(BlueprintCallable)
    void ForceSpawnJob(FName JobID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceSpawnCompetition(FName CompetitionName);
    
    UFUNCTION(BlueprintCallable)
    void DebugSpawnNarrativeData(FName NarrativeID, bool bAddToSeen);
    
    UFUNCTION(BlueprintCallable)
    void DebugCompleteNarrativeData(FName NarrativeID);
    
public:
    UFUNCTION(BlueprintCallable)
    void CompleteJob(FName JobID, bool GrantsRewards, bool GrantsBonusRewards, bool bTriggerRewardScreen);
    
    UFUNCTION(BlueprintCallable)
    void CompleteAllJobs(bool GrantsRewards, bool bGiveBonusRewards);
    
    UFUNCTION()
    void CheckDataLoaded();
    
    UFUNCTION(BlueprintCallable)
    void AddAllArticles();
    
    
    // Fix for true pure virtual functions not being implemented
};

