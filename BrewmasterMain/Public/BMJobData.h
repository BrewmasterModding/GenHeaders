#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMJobType.h"
#include "EBMBeerCategory.h"
#include "EBMSponsor.h"
#include "EBMRecipeDifficulty.h"
#include "BMRewardData.h"
#include "BMRequirementPool.h"
#include "EBMMastery.h"
#include "EBMRecipeBatchSize.h"
#include "BMJobData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMJobData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FName JobID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMJobType JobType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMBeerCategory BeerCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FName BeerStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMSponsor Sponsor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMRecipeDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMMastery MasteryLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMRecipeBatchSize BatchSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TArray<FName> Requirements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TArray<FName> BonusRequirements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TArray<FBMRequirementPool> RequirementPool;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FBMRequirementPool BonusRequirementPool;
    
    UPROPERTY(SaveGame)
    TArray<FName> ChoosenRequirementPoolConditions;
    
    UPROPERTY(SaveGame)
    FName BonusChoosenRequirementPoolCondition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FBMRewardData Rewards;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FBMRewardData BonusRewards;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool bMustOwnEquipment;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool bMustOwnIngredients;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool bAllGrain;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool bForceSpawnIfNarrative;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool bForceSpawnIfValid;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool bForceSpawnOnce;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 Weighting;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 SeasonsMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 SeasonsMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TArray<FName> NarrativeStageComplete;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TArray<FName> NarrativeStageIncomplete;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool IgnoreJob;
    
    FBMJobData();
};

