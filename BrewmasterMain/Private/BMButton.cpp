#include "BMButton.h"

void UBMButton::SetActionInputValue(EBMInput NewInput) {
}

void UBMButton::PlayPressAudio() {
}

void UBMButton::PlayHoverAudio() {
}

void UBMButton::BroadcastButtonIndex() {
}

void UBMButton::BroadcastActionDelegate() {
}

UBMButton::UBMButton() {
    this->ButtonID = 0;
    this->AudioAssetList = NULL;
    this->bOverridePressAudio = false;
    this->bOverrideHoverAudio = false;
}

