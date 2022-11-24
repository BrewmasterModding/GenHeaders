#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMTutorialConditions.h"
#include "EBMEquipmentCategory.h"
#include "EBMIngredientCategory.h"
#include "BMTutorialStages.generated.h"

class ABMBaseActor;
class UBMInteractionComponent;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMTutorialStages : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName StageID;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int32 Phase;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool IsResetStage;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FName ObjectiveID;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TSubclassOf<ABMBaseActor> ObjectiveMarker;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TMap<TSubclassOf<ABMBaseActor>, FBMTutorialConditions> TutorialConditions;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<TSubclassOf<UBMInteractionComponent>> BlockedInteractions;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool BlockJournalInteractions;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<EBMEquipmentCategory> BlockedEquipment;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<EBMIngredientCategory> BlockedIngredients;
    
    FBMTutorialStages();
};

