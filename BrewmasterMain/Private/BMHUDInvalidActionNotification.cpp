#include "BMHUDInvalidActionNotification.h"


void UBMHUDInvalidActionNotification::PlayTweenInvalidActionPassiveOut() {
}

void UBMHUDInvalidActionNotification::PlayTweenInvalidActionPassiveIn() {
}

void UBMHUDInvalidActionNotification::PlayTweenInvalidActionPassiveFlash() {
}

void UBMHUDInvalidActionNotification::PlayTweenInvalidActionNotifyOnce() {
}

UBMHUDInvalidActionNotification::UBMHUDInvalidActionNotification() : UUserWidget(FObjectInitializer::Get()) {
    this->ParentCanvasPanelSlot = NULL;
    this->NotificationBorder = NULL;
    this->AnimateInTime = 0.00f;
    this->PauseTime = 0.00f;
    this->AnimateOutTime = 0.00f;
    this->PassiveAnimateInOutTime = 0.00f;
    this->ActiveTweenContainer = NULL;
}

