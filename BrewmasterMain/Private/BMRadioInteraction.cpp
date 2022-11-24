#include "BMRadioInteraction.h"

void UBMRadioInteraction::RefreshRadioStateFromSettings() {
}

UBMRadioInteraction::UBMRadioInteraction() {
    this->bRadioOn = false;
    this->RadioVolume = 1.00f;
    this->bUse3DAudio = true;
    this->FadeTime = 1.00f;
    this->RadioAudio = NULL;
    this->GameSettings = NULL;
}

