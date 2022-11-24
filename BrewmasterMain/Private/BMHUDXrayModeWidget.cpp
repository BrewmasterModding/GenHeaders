#include "BMHUDXrayModeWidget.h"



void UBMHUDXrayModeWidget::SetAllowUpdate(bool bShouldUpdateNow) {
}





void UBMHUDXrayModeWidget::ClearCachedNames() {
}

UBMHUDXrayModeWidget::UBMHUDXrayModeWidget() {
    this->CurrentlySelectedActor = NULL;
    this->CurrentXRayMode = EBMXrayInformationMode::ContextualMode;
    this->bshouldUpdate = true;
}

