#include "BMGameModeBase.h"
#include "Templates/SubclassOf.h"

class ABMRewardManager;
class ABMUGCManager;
class ABMTutorialManager;
class ABMLabelMakerManager;
class ABMTimeController;
class ABMTastingSequenceManager;
class ABMCellarManager;
class ABMQuarterlyCoversManager;
class ABMContextualTipManager;
class ABMInventoryManager;
class ABMCampaignManager;
class ABMGameStats;
class ABMBrewVisualsManager;
class ABMSimulationControl;
class ABMAchievementManager;
class AActor;
class ABMBaseIngredient;

void ABMGameModeBase::StartAutoSaveTimer() {
}

bool ABMGameModeBase::SetToDefaultLit() {
    return false;
}

ABMUGCManager* ABMGameModeBase::GetUGCManager() {
    return NULL;
}

ABMTutorialManager* ABMGameModeBase::GetTutorialManagerWithoutSpawn() {
    return NULL;
}

ABMTutorialManager* ABMGameModeBase::GetTutorialManager() {
    return NULL;
}

ABMTimeController* ABMGameModeBase::GetTimeController() {
    return NULL;
}

ABMTastingSequenceManager* ABMGameModeBase::GetTastingSequenceManager() {
    return NULL;
}

ABMRewardManager* ABMGameModeBase::GetRewardManager() {
    return NULL;
}

ABMQuarterlyCoversManager* ABMGameModeBase::GetQuarterlyCoverManager() {
    return NULL;
}

ABMLabelMakerManager* ABMGameModeBase::GetLabelMakerManager() {
    return NULL;
}

ABMInventoryManager* ABMGameModeBase::GetInventoryManager() {
    return NULL;
}

ABMGameStats* ABMGameModeBase::GetGameStats() {
    return NULL;
}

ABMContextualTipManager* ABMGameModeBase::GetContextualTipManager() {
    return NULL;
}

ABMCellarManager* ABMGameModeBase::GetCellarManager() {
    return NULL;
}

ABMCampaignManager* ABMGameModeBase::GetCampaignManager() {
    return NULL;
}

ABMBrewVisualsManager* ABMGameModeBase::GetBrewVisualManager() {
    return NULL;
}

ABMSimulationControl* ABMGameModeBase::GetBrewSimControl() {
    return NULL;
}

ABMAchievementManager* ABMGameModeBase::GetAchievManager() {
    return NULL;
}

AActor* ABMGameModeBase::CreateItemFromData(FDataTableRowHandle ItemData, FVector SpawnLocation, FRotator SpawnRotation, bool bShouldRegisterWithBrewSim) {
    return NULL;
}

ABMBaseIngredient* ABMGameModeBase::CreateIngredientFromData(FDataTableRowHandle ItemData, TSubclassOf<ABMBaseIngredient> ItemClass, FVector SpawnLocation, FRotator SpawnRotation, float Mass, float Temp) {
    return NULL;
}

void ABMGameModeBase::ClearAutoSaveTimer() {
}

ABMGameModeBase::ABMGameModeBase() {
    this->BrewSimControl = NULL;
    this->GameStatManager = NULL;
    this->BrewingFixedDataClass = NULL;
    this->MetaGameDataClass = NULL;
    this->GameStatsManagerClass = NULL;
    this->TastingSequenceManagerClass = NULL;
    this->InventoryManagerClass = NULL;
    this->RewardManagerClass = NULL;
    this->CampaignManagerClass = NULL;
    this->ContextualTipManagerClass = NULL;
    this->AchievManagerClass = NULL;
    this->BrewVisualsManagerClass = NULL;
    this->TutorialManagerClass = NULL;
    this->CellarManagerClass = NULL;
    this->TimeControllerClass = NULL;
    this->LabelMakerManagerClass = NULL;
    this->UGCManagerClass = NULL;
    this->QuarterlyCoversManagerClass = NULL;
    this->InvalidActionsData = NULL;
    this->AutosaveTime = 300.00f;
}

