#include "BMOptionWidget.h"

void UBMOptionWidget::UpdateSliderValueText(float Value) {
}

void UBMOptionWidget::UnbindActionPrompts() {
}

void UBMOptionWidget::SkipTutorialConfirmed() {
}

void UBMOptionWidget::SetOptionData(const FString& Name, EBMOptionType Type, bool Restart) {
}


void UBMOptionWidget::ResetContextualTips() {
}

void UBMOptionWidget::OpenSkipTutorialScreen() {
}

void UBMOptionWidget::OpenSafeArea() {
}

void UBMOptionWidget::OpenResetContextualTipsScreen() {
}

void UBMOptionWidget::OpenKeyboardBindingScreen() {
}

void UBMOptionWidget::OpenControllerBindingScreen() {
}

void UBMOptionWidget::IncreaseOption() {
}











void UBMOptionWidget::DecreaseOption() {
}

void UBMOptionWidget::ChangeToggleState() {
}

void UBMOptionWidget::BindIntValue(const FString& FunctionName, int32 Min, int32 Max, int32 CurrentValue, bool UseDefaultString) {
}

void UBMOptionWidget::BindFloatValue(const FString& FunctionName, float Min, float Max, float CurrentValue, float SliderAmount) {
}

void UBMOptionWidget::BindButton(const FString& FunctionName) {
}

void UBMOptionWidget::BindBooleanValue(const FString& FunctionName, bool CurrentValue) {
}

void UBMOptionWidget::BindActionPrompts() {
}

UBMOptionWidget::UBMOptionWidget() {
    this->OptionText = NULL;
    this->OptionCheckBox = NULL;
    this->OptionSlider = NULL;
    this->IncreaseButton = NULL;
    this->DecreaseButton = NULL;
    this->ValueText = NULL;
    this->IncreaseGlyph = NULL;
    this->DecreaseGlyph = NULL;
    this->ToggleGlyph = NULL;
}

