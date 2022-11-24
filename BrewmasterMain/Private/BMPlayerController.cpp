#include "BMPlayerController.h"

class UBMActionGlyph;
class UBMInputManager;
class ABMHUD;

void ABMPlayerController::UpdateXRayUI() {
}


void ABMPlayerController::UpdateCursorUIFocus() {
}

void ABMPlayerController::UpdateCursorPosition(float UnscaledDeltaTime) {
}

void ABMPlayerController::UpdateActiveActionGlyphs() {
}




void ABMPlayerController::SetInputMethod(bool bIsGamepad) {
}

void ABMPlayerController::SetDebugMenuVisibility(bool Visibility) {
}

void ABMPlayerController::SetBrewersFullScreenUIInputsBlocked(bool BlockInput) {
}

void ABMPlayerController::SetAlphaWidgetSavePos(float ScrollPos) {
}

void ABMPlayerController::SetActiveInputMode(EBMInputSet NewMode) {
}

void ABMPlayerController::SetActionGlyph(EBMInput InputAction, UBMActionGlyph* PromptGlyph, bool bIsInlineGlyph) {
}

void ABMPlayerController::RemoveActiveAction(FBMInputActionData InputToRemove) {
}

void ABMPlayerController::NavigateUI(FBM_UI_ID UIID) {
}

bool ABMPlayerController::IsWithEditor() {
    return false;
}

bool ABMPlayerController::HandlePlayerInput(EBMInput InputID, EBMInputSet InteractionSet, int32 InputKeyID) {
    return false;
}

FVector ABMPlayerController::GetStoredWatchRotation() {
    return FVector{};
}

bool ABMPlayerController::GetShouldCursorSlowOnInteractables() {
    return false;
}


bool ABMPlayerController::GetLastInputWasGamepad() {
    return false;
}

bool ABMPlayerController::GetIsCursorCircle() {
    return false;
}

UBMInputManager* ABMPlayerController::GetInputManager() {
    return NULL;
}

TMap<int32, EBMInput> ABMPlayerController::GetInputIDFromInputEvent(FKey Key, TEnumAsByte<EInputEvent> EventType, EBMInputSet InteractionSet) {
    return TMap<int32, EBMInput>();
}

FVector2D ABMPlayerController::GetCursorPosition() {
    return FVector2D{};
}

void ABMPlayerController::GetCircularCursorPositions(TArray<FVector2D>& outPositions) {
}

ABMHUD* ABMPlayerController::GetBMHud() {
    return NULL;
}

float ABMPlayerController::GetAlphaWidgetSavePos() {
    return 0.0f;
}

void ABMPlayerController::ForceRefreshMousePosition() {
}

void ABMPlayerController::DebugToggleHideUI() {
}

bool ABMPlayerController::CheckIfButtonIsPressed(int32 InputIndex) {
    return false;
}

void ABMPlayerController::BackOneStepInUIHistory() {
}

void ABMPlayerController::BackInUIHistoryAndPopFrozenActions() {
}

void ABMPlayerController::AxisTurnRate(float AxisValue) {
}

void ABMPlayerController::AxisTurn(float AxisValue) {
}

void ABMPlayerController::AxisMoveRight(float AxisValue) {
}

void ABMPlayerController::AxisMoveLeft(float AxisValue) {
}

void ABMPlayerController::AxisMoveForward(float AxisValue) {
}

void ABMPlayerController::AxisMoveBack(float AxisValue) {
}

void ABMPlayerController::AxisLookUpRate(float AxisValue) {
}

void ABMPlayerController::AxisLookUp(float AxisValue) {
}

ABMPlayerController::ABMPlayerController() {
    this->bCanEnterDebugMode = false;
    this->bCanUseKeyboardArrowsToNavigateUI = false;
    this->bCanUseTabToNavigateUI = false;
    this->CurrentInputSet = EBMInputSet::HUD_World;
    this->PreInputSet = EBMInputSet::HUD_World;
    this->AudioAssetList = NULL;
    this->DisableInputKeys = false;
    this->IsJournalTutorialBlocked = false;
    this->bRevertOptionsTimerOn = false;
    this->RevertSettingsAccumulatedTime = 0.00f;
    this->bLerpBetweenSpeeds = false;
    this->ScreenSpaceCursorRadius = 10.00f;
    this->ScreenSpaceCursorRadius_HUD = 10.00f;
    this->CursorSpeedMultiplier_CurrentPlatform = 1.00f;
    this->CursorAimSensitivityMultiplier_CurrentPlatform = 1.00f;
    this->LerpSpeedToHover = 10.00f;
    this->LerpSpeedFromHover = 1.00f;
    this->CursorSpeedMultiplier_Current = 0.00f;
    this->CursorTravelSpeed_AsScreenPercentage = 0.01f;
    this->CursorTravelSpeed_Threshold = 0.75f;
    this->bAlwaysUseCircularCursor = false;
    this->InputManager = NULL;
    this->AlphaWidgetSavedPos = 0.00f;
    this->PCLoadingScreenFadeTime = 1.00f;
    this->SwitchLoadingScreenFadeTime = 1.00f;
    this->XboxLoadingScreenFadeTime = 1.00f;
    this->PlaystationLoadingScreenFadeTime = 1.00f;
    this->SelectedFurnitureIndex = 0;
    this->ActiveFurnitureIndex = 0;
    this->NextFestHUDObjective = NULL;
}

