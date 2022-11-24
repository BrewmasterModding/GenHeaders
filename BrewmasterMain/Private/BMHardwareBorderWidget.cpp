#include "BMHardwareBorderWidget.h"

void UBMHardwareBorderWidget::RefreshVisibility_Internal(bool bIsCurrentlyUsingGamepad) {
}

void UBMHardwareBorderWidget::RefreshVisibility() {
}

bool UBMHardwareBorderWidget::CheckShouldShowForCurrentPlatform() {
    return false;
}

bool UBMHardwareBorderWidget::CheckShouldShowForCurrentInputDevice(bool bIsCurrentlyUsingGamepad) {
    return false;
}

UBMHardwareBorderWidget::UBMHardwareBorderWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SlateVisibilityWhenShown = ESlateVisibility::Visible;
    this->bShowOnSwitch = true;
    this->bShowOnXBox = true;
    this->bShowOnPlayStation = true;
    this->bShowOnPC = true;
    this->bShowWithController = true;
    this->bShowWithMouseAndKeyboard = true;
}

