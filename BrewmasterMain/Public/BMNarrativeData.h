#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMRewardData.h"
#include "EBMStoryCharacter.h"
#include "BMNarrativeData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMNarrativeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FName NarrativeStageID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FName StageText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TArray<FName> Objectives;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FBMRewardData Rewards;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FName RewardText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TArray<FName> CompleteNarrativeStages;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMStoryCharacter Character;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool bIsTutorial;
    
    FBMNarrativeData();
};

