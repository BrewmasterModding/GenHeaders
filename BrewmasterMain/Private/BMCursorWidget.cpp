#include "BMCursorWidget.h"

void UBMCursorWidget::UpdateCursorType_Implementation() {
}

UBMCursorWidget::UBMCursorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsCircle = false;
    this->bIsFreeMove = false;
    this->bIgnoreResolutionScaling = false;
    this->CursorSize_Gamepad_Default = 0;
    this->CursorSize_Gamepad_Freemove = 0;
    this->CursorSize_Mouse_Default = 0;
    this->CursorSize_Mouse_Freemove = 0;
    this->ScreenResolutionScale = 1.00f;
}

