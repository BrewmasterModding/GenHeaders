#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMSaveableActorInterface.h"
#include "BMContextualTipsData.h"
#include "BMContextualTipManager.generated.h"

class UBMInteractionComponent;

UCLASS()
class BREWMASTERMAIN_API ABMContextualTipManager : public AInfo, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float MaxContextualTipsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float MaxContextualTipsTimeFallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float RefreshPossibleContextualTipsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float InventoryItemChangeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<TSubclassOf<UBMInteractionComponent>> BlacklistedInteractionComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 GlobalCoolDown;
    
protected:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FBMContextualTipsData CurrentContextualTip;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    TArray<FName> CurrentlyPossibleContextualTips;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    TArray<FName> TutorialStageContextualTips;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    TMap<FName, int32> ContextualTipDisplayNumber;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    TMap<FName, int32> TipCoolDownList;
    
public:
    ABMContextualTipManager();
    
    // Fix for true pure virtual functions not being implemented
};

