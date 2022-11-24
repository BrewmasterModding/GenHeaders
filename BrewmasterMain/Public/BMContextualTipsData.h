#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMContextualTipConditionsByClass.h"
#include "EBMMastery.h"
#include "BMContextualTipsData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMContextualTipsData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName ID;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<FBMContextualTipConditionsByClass> ConditionalListOfLists;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool Advanced;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool OnlyBrewmasterMode;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int32 DisplayLimit;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool IgnoreCooldown;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int32 Priority;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<FName> NarrativeStagesComplete;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMMastery MasteryMinimum;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMMastery MasteryMaximum;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int32 SeasonsMinimum;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int32 SeasonsMaximum;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool DisableDuringTutorial;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool IgnoreTimerWhenValid;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FName TutorialStage;
    
    FBMContextualTipsData();
};

