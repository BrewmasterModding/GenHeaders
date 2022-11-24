#include "BMBootScreenWidget.h"


void UBMBootScreenWidget::NextTween() {
}

void UBMBootScreenWidget::KeyPressedMouse(const FGeometry& MyGeometry, const FPointerEvent& InKeyEvent) {
}





void UBMBootScreenWidget::BootSequenceFinished() {
}

void UBMBootScreenWidget::BootScreenOnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent) {
}

UBMBootScreenWidget::UBMBootScreenWidget() {
    this->FadeInTime = 1.00f;
    this->FadeOutTime = 1.00f;
    this->StayOnScreenTime = 3.00f;
    this->TweenContainer = NULL;
    this->bForceShowConsoleTitle = false;
}

