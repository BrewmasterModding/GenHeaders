#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMSaveableActorInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BM_UI_ID.h"
#include "BMTutorialStages.h"
#include "BMTutorialPopUpData.h"
#include "BMTutorialItemRestrictions.h"
#include "BMTutorialManager.generated.h"

class AActor;
class UBMTutorialPopup;
class UBMUserWidget;
class ABMPlayerController;
class ABMHUD;

UCLASS()
class BREWMASTERMAIN_API ABMTutorialManager : public AInfo, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float CheckCurrentStageTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    AActor* Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool SkipTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FVector2D AdditionalObjectivePadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName InitialNarrativeStage;
    
protected:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FBMTutorialStages CurrentTutorialStage;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    int32 CurrentTutorialStageNumber;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    float StageStartDay;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FBMTutorialPopUpData CurrentTutorialPopUp;
    
    UPROPERTY(SaveGame)
    TArray<FName> SeenTutorialPopUps;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMTutorialPopup> TutorialPopupClass;
    
    UPROPERTY(Instanced)
    UBMTutorialPopup* CurrentPopUp;
    
    UPROPERTY()
    FBM_UI_ID CurrentPopUpScreenNavigationID;
    
    UPROPERTY(Instanced)
    UBMUserWidget* CurrentParentWidget;
    
    UPROPERTY(SaveGame)
    bool PopUpOnlyMode;
    
    UPROPERTY(SaveGame)
    bool bSeenJeffPopup;
    
    UPROPERTY(SaveGame)
    bool bAllPopupsSeen;
    
    UPROPERTY(SaveGame)
    bool FirstRun;
    
    UPROPERTY(SaveGame)
    bool bSeenTutorialEnd;
    
    UPROPERTY()
    ABMPlayerController* PlayerController;
    
    UPROPERTY()
    ABMHUD* PlayerHUD;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FBMTutorialItemRestrictions> TutorialItemRestrictions;
    
    ABMTutorialManager();
protected:
    UFUNCTION()
    void TryDisableInventoryRestriction();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSeenTutorialStages(TArray<FName> SeenStages);
    
    UFUNCTION(BlueprintCallable)
    void SetPopUpOnlyMode();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetSeenTutorialStages();
    
protected:
    UFUNCTION()
    void EnabledPopUpInteractions();
    
    UFUNCTION()
    void CheckDataLoaded();
    
    UFUNCTION()
    void CheckCurrentPopUpConditions();
    
    
    // Fix for true pure virtual functions not being implemented
};

