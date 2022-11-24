#include "BMTutorialManager.h"

void ABMTutorialManager::TryDisableInventoryRestriction() {
}

void ABMTutorialManager::SetSeenTutorialStages(TArray<FName> SeenStages) {
}

void ABMTutorialManager::SetPopUpOnlyMode() {
}

TArray<FName> ABMTutorialManager::GetSeenTutorialStages() {
    return TArray<FName>();
}

void ABMTutorialManager::EnabledPopUpInteractions() {
}

void ABMTutorialManager::CheckDataLoaded() {
}

void ABMTutorialManager::CheckCurrentPopUpConditions() {
}

ABMTutorialManager::ABMTutorialManager() {
    this->CheckCurrentStageTime = 1.00f;
    this->Objective = NULL;
    this->SkipTutorial = true;
    this->InitialNarrativeStage = TEXT("Char1_Stage1");
    this->CurrentTutorialStageNumber = 0;
    this->StageStartDay = 0.00f;
    this->TutorialPopupClass = NULL;
    this->CurrentPopUp = NULL;
    this->CurrentParentWidget = NULL;
    this->PopUpOnlyMode = false;
    this->bSeenJeffPopup = false;
    this->bAllPopupsSeen = false;
    this->FirstRun = true;
    this->bSeenTutorialEnd = false;
    this->PlayerController = NULL;
    this->PlayerHUD = NULL;
}

