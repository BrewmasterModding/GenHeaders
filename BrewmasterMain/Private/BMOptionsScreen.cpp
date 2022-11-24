#include "BMOptionsScreen.h"

void UBMOptionsScreen::UpdateWarningText() {
}

void UBMOptionsScreen::SetToKeyboardMouseDefaults() {
}

void UBMOptionsScreen::SetToGraphicsDefaults() {
}

void UBMOptionsScreen::SetToGeneralDefaults() {
}

void UBMOptionsScreen::SetToDisplayDefaults() {
}

void UBMOptionsScreen::SetToControllerDefaults() {
}

void UBMOptionsScreen::SetToAudioDefaults() {
}

void UBMOptionsScreen::SetToAccessibilityDefaults() {
}


void UBMOptionsScreen::SetCustomGraphicsQuality(int32 Value) {
}

void UBMOptionsScreen::RevertResolutionChanges() {
}

void UBMOptionsScreen::ResetToDefaultsDialougeBox() {
}

void UBMOptionsScreen::RefreshLocChange() {
}

void UBMOptionsScreen::RefreshGraphicsUISettings(int32 Value) {
}

void UBMOptionsScreen::RefreshGeneralOptions() {
}

void UBMOptionsScreen::RefreshCurrentlyPossibleContextualTips(int32 Value) {
}

void UBMOptionsScreen::HandlePreviousTabAction() {
}

void UBMOptionsScreen::HandleNextTabAction() {
}















void UBMOptionsScreen::DisableResolutionCarousel(int32 Value) {
}

void UBMOptionsScreen::ConfirmResolutionChanges() {
}

void UBMOptionsScreen::CloseOptionsScreen() {
}

void UBMOptionsScreen::CheckForDisplayChangesOnTabChange(int32 TabIndexSwitchingTo) {
}

void UBMOptionsScreen::AutoRevertResolutionChanges() {
}

void UBMOptionsScreen::ApplyChangesToResolution() {
}

UBMOptionsScreen::UBMOptionsScreen() {
    this->ToggleOptionWidgetBP = NULL;
    this->SliderOptionWidgetBP = NULL;
    this->CarouselOptionWidgetBP = NULL;
    this->ButtonOptionWidgetBP = NULL;
    this->bAllowTabNavigationToWrap = false;
    this->OptionsScrollBox = NULL;
    this->BackButton = NULL;
    this->RevertTime = 15;
    this->RevertTimeLeft = 15;
    this->GraphicsQualityWidget = NULL;
    this->WarningDialouge = NULL;
    this->CurrentTabIndex = -1;
    this->bHasSwitchedFromDisplayTab = false;
    this->SwitchedFromDisplayTabTo = -1;
}

