#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "BMGameModeBase.generated.h"

class ABMSimulationControl;
class ABMTastingSequenceManager;
class ABMCampaignManager;
class ABMGameStats;
class ABMRewardManager;
class ABMFixedData;
class ABMTutorialManager;
class ABMMetaGameFixedData;
class ABMContextualTipManager;
class ABMInventoryManager;
class ABMAchievementManager;
class ABMBrewVisualsManager;
class ABMQuarterlyCoversManager;
class ABMCellarManager;
class ABMTimeController;
class ABMLabelMakerManager;
class ABMUGCManager;
class UDataTable;
class AActor;
class ABMBaseIngredient;

UCLASS(NonTransient)
class BREWMASTERMAIN_API ABMGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ABMSimulationControl* BrewSimControl;
    
    UPROPERTY()
    ABMGameStats* GameStatManager;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMFixedData> BrewingFixedDataClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMMetaGameFixedData> MetaGameDataClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMGameStats> GameStatsManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMTastingSequenceManager> TastingSequenceManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMInventoryManager> InventoryManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMRewardManager> RewardManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMCampaignManager> CampaignManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMContextualTipManager> ContextualTipManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMAchievementManager> AchievManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMBrewVisualsManager> BrewVisualsManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMTutorialManager> TutorialManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMCellarManager> CellarManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMTimeController> TimeControllerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMLabelMakerManager> LabelMakerManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMUGCManager> UGCManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMQuarterlyCoversManager> QuarterlyCoversManagerClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* InvalidActionsData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AutosaveTime;
    
    ABMGameModeBase();
    UFUNCTION(BlueprintCallable)
    void StartAutoSaveTimer();
    
    UFUNCTION(BlueprintCallable)
    bool SetToDefaultLit();
    
    UFUNCTION(BlueprintCallable)
    ABMUGCManager* GetUGCManager();
    
    UFUNCTION(BlueprintCallable)
    ABMTutorialManager* GetTutorialManagerWithoutSpawn();
    
    UFUNCTION(BlueprintCallable)
    ABMTutorialManager* GetTutorialManager();
    
    UFUNCTION(BlueprintCallable)
    ABMTimeController* GetTimeController();
    
    UFUNCTION(BlueprintCallable)
    ABMTastingSequenceManager* GetTastingSequenceManager();
    
    UFUNCTION(BlueprintCallable)
    ABMRewardManager* GetRewardManager();
    
    UFUNCTION(BlueprintCallable)
    ABMQuarterlyCoversManager* GetQuarterlyCoverManager();
    
    UFUNCTION(BlueprintCallable)
    ABMLabelMakerManager* GetLabelMakerManager();
    
    UFUNCTION(BlueprintCallable)
    ABMInventoryManager* GetInventoryManager();
    
    UFUNCTION(BlueprintCallable)
    ABMGameStats* GetGameStats();
    
    UFUNCTION(BlueprintCallable)
    ABMContextualTipManager* GetContextualTipManager();
    
    UFUNCTION(BlueprintCallable)
    ABMCellarManager* GetCellarManager();
    
    UFUNCTION(BlueprintCallable)
    ABMCampaignManager* GetCampaignManager();
    
    UFUNCTION(BlueprintCallable)
    ABMBrewVisualsManager* GetBrewVisualManager();
    
    UFUNCTION(BlueprintCallable)
    ABMSimulationControl* GetBrewSimControl();
    
    UFUNCTION(BlueprintCallable)
    ABMAchievementManager* GetAchievManager();
    
    UFUNCTION(BlueprintCallable)
    AActor* CreateItemFromData(FDataTableRowHandle ItemData, FVector SpawnLocation, FRotator SpawnRotation, bool bShouldRegisterWithBrewSim);
    
    UFUNCTION(BlueprintCallable)
    ABMBaseIngredient* CreateIngredientFromData(FDataTableRowHandle ItemData, TSubclassOf<ABMBaseIngredient> ItemClass, FVector SpawnLocation, FRotator SpawnRotation, float Mass, float Temp);
    
    UFUNCTION(BlueprintCallable)
    void ClearAutoSaveTimer();
    
};

