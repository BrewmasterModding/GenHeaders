#include "BMGamepadBindingOverlay.h"

void UBMGamepadBindingOverlay::SetupBindingOverlay() {
}

void UBMGamepadBindingOverlay::SetNewInput(int32 IndexToSet, FKeyEvent InKeyEvent) {
}

void UBMGamepadBindingOverlay::SetCurrentInputs(EBMInput InputAction, EBMInputSet InputSet, EBMInputPressType PressType, int32 FirstIndex, int32 SecondIndex, bool Multi) {
}

void UBMGamepadBindingOverlay::IncreaseButtonPressType() {
}
















void UBMGamepadBindingOverlay::DecreaseButtonPressType() {
}

void UBMGamepadBindingOverlay::ConfirmNewBindings() {
}

void UBMGamepadBindingOverlay::CloseBindingOverlay() {
}

bool UBMGamepadBindingOverlay::ButtonReleased(FGeometry MyGeometry, FKeyEvent InKeyEvent) {
    return false;
}

bool UBMGamepadBindingOverlay::ButtonPressed(FGeometry MyGeometry, FKeyEvent InKeyEvent) {
    return false;
}

UBMGamepadBindingOverlay::UBMGamepadBindingOverlay() {
    this->BackButton = NULL;
    this->ConfirmButton = NULL;
    this->RecordBindingButton = NULL;
    this->ButtonIncrease = NULL;
    this->ButtonDecrease = NULL;
    this->PressTypeText = NULL;
    this->BindingValidationText = NULL;
    this->ActionTitleText = NULL;
    this->TwoButtonWarningText = NULL;
    this->CurrentPlusImage = NULL;
    this->NewPlusImage = NULL;
}

