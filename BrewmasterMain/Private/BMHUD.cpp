#include "BMHUD.h"

class AActor;
class UBMHUDFullInfomationWidget;
class ABMPlayerController;
class ABMCharacter;
class USoundBase;
class UBMStopWatchWidget;
class UBMHUDPinnedRecipe;
class UBMHUDContextualInfomationWidget;
class UBMHUDInvalidActionNotification;
class UBMHUDInventoryBar;
class UBMHUDInteractionPromptSystem;
class UBMHUDContextualInfo;
class UUserWidget;
class UBMScreenHUDBuildMode;

void ABMHUD::UpdateXRayModeWidget(AActor* Interactee, EBMXrayInformationMode CurrentMode, bool bIsVisible, TArray<FBMInWorldInteraction> PossibleInteractions) {
}

void ABMHUD::UpdateStopWatchUI(ABMPlayerController* PC) {
}

void ABMHUD::UpdatePackagedBeerStats(AActor* HitActor) {
}

void ABMHUD::UpdateBuildModeUI(ABMPlayerController* PlayerController) {
}

void ABMHUD::ToggleBuildMode() {
}

void ABMHUD::ToggleActiveStopWatch(ABMCharacter* BMCharacter, ABMPlayerController* PC) {
}

void ABMHUD::SetXRayModeToUpdate(bool bshouldUpdate, ABMPlayerController* PlayerController) {
}

void ABMHUD::SetSwapModeOn(bool bSetSwapModeOn) {
}

void ABMHUD::SetReticuleVisible(bool bNewVisible) {
}

void ABMHUD::SetObjectiveMarkerVisible(bool bNewVisible) {
}

void ABMHUD::SetHUDVisible(bool bNewActive) {
}

void ABMHUD::SetDetailedXrayVisible(bool bNewVisible) {
}

bool ABMHUD::ReturnToBuildModeHUD() {
    return false;
}

void ABMHUD::PlaySoundAsset(USoundBase* SoundAsset) {
}

void ABMHUD::OpenOverlay(FBM_UI_ID OverlayID) {
}

bool ABMHUD::IsSwapModeOn() {
    return false;
}

bool ABMHUD::IsBuildModeOn() {
    return false;
}

void ABMHUD::IncreaseItemViewPanel() {
}

void ABMHUD::GoToScreen(FBM_UI_ID ScreenID) {
}

UBMHUDFullInfomationWidget* ABMHUD::GetXRayFullInformationWidget() {
    return NULL;
}

UBMStopWatchWidget* ABMHUD::GetStopWatchWidget() {
    return NULL;
}

UBMHUDPinnedRecipe* ABMHUD::GetPinnedRecipeWidget() {
    return NULL;
}

bool ABMHUD::GetNotificationData(EBMNotificationType Type, FBMNotificationData& OutNotificationData) const {
    return false;
}

UBMHUDContextualInfomationWidget* ABMHUD::GetItemInformationWidget() {
    return NULL;
}

UBMHUDInvalidActionNotification* ABMHUD::GetInvalidActionWidget() {
    return NULL;
}

UBMHUDInventoryBar* ABMHUD::GetHUDInventoryBar() {
    return NULL;
}

UBMHUDInteractionPromptSystem* ABMHUD::GetHudInteractionPromptSystem() {
    return NULL;
}

UBMHUDContextualInfo* ABMHUD::GetHUDContextualInfo() {
    return NULL;
}

UBMStopWatchWidget* ABMHUD::GetFullStopWatchModeWidget() {
    return NULL;
}

UUserWidget* ABMHUD::GetCurrentScreen() {
    return NULL;
}

UUserWidget* ABMHUD::GetCurrentOverlay() {
    return NULL;
}

EBMBuildModeHudStatus ABMHUD::GetBuildModeHUDStatus() {
    return EBMBuildModeHudStatus::NONE;
}

UBMScreenHUDBuildMode* ABMHUD::GetBuildModeHUD() {
    return NULL;
}

UBMHUDInteractionPromptSystem* ABMHUD::GetBuildHudInteractionPromptSystem() {
    return NULL;
}

void ABMHUD::DecreaseItemViewPanel() {
}


void ABMHUD::CreateHUD_Objective() {
}

void ABMHUD::CloseOverlay() {
}

void ABMHUD::BackOneStepInUIHistory() {
}

ABMHUD::ABMHUD() {
    this->HUD_Objective = NULL;
    this->HUD_Reticule = NULL;
    this->HUD_InventoryBar = NULL;
    this->ItemInformationView = NULL;
    this->DetailedXRayView = NULL;
    this->bDrawXrayMode = false;
    this->HUD_InteractionPromptSystem = NULL;
    this->bDrawCursor = false;
    this->ActiveStopWatch = NULL;
    this->CurrentScreen = NULL;
    this->CurrentHUD = NULL;
    this->CurrentOverlay = NULL;
    this->StopWatchModeOpen = false;
    this->BuildModeHUD = NULL;
    this->BuildHUD_WidgetClass = NULL;
    this->bBuildModeOn = false;
    this->bSwapModeOn = false;
    this->BuildHUD_InteractionPromptSystem = NULL;
    this->BuildHUD_ExitBuildModeActionPrompt = NULL;
    this->BuildHUD_OpenStorageActionPrompt = NULL;
    this->BuildHUD_SwapInventoryBar = NULL;
    this->PlaceHolderScreenClass = NULL;
    this->ObjectiveMarkerClass = NULL;
    this->HUD_WidgetClass = NULL;
    this->ShouldReturnToWorldHUD = true;
    this->bDebugNoHUDWidget = false;
    this->bBMDebugHideAllUI = false;
    this->AudioAssetList = NULL;
    this->MaxVisibleNotifications = 4;
}

