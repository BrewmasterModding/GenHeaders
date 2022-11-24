#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMBeerCategory.h"
#include "EBMSponsor.h"
#include "BMRewardData.h"
#include "EBMMastery.h"
#include "EBMRecipeDifficulty.h"
#include "BMCompetitionData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMCompetitionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    FName CompetitionID;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMBeerCategory BeerCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMSponsor Sponsor;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<FName> OtherCompetitionsNeedToCompleteIDs;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMMastery MasteryLevel;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMRecipeDifficulty DifficultyLevel;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<FName> NarrativeStagesComplete;
    
    UPROPERTY(EditAnywhere, SaveGame)
    float PointsPerKeyStatPercent;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int32 PointsPerJudgesPreference;
    
    UPROPERTY(EditAnywhere, SaveGame)
    float ContaminationThreshold;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int32 ContaminationPointsPerPercent;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<FName> JudgesPreferences;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FBMRewardData BronzeReward;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FBMRewardData SilverReward;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FBMRewardData GoldReward;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool IgnoreCompetition;
    
    FBMCompetitionData();
};

