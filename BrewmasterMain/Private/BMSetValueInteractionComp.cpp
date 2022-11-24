#include "BMSetValueInteractionComp.h"

class USoundBase;

void UBMSetValueInteractionComp::UpdateValueFromConfirmedInput() {
}

void UBMSetValueInteractionComp::SetValueDirectly(float NewValue) {
}

void UBMSetValueInteractionComp::SetInitialCurrentValue() {
}

void UBMSetValueInteractionComp::PlaySoundAsset(USoundBase* SoundAsset) {
}

float UBMSetValueInteractionComp::GetMinValue() {
    return 0.0f;
}

float UBMSetValueInteractionComp::GetMaxValue() {
    return 0.0f;
}

float UBMSetValueInteractionComp::GetInitialCurrentValue() {
    return 0.0f;
}

void UBMSetValueInteractionComp::GetAudioAssetList() {
}

void UBMSetValueInteractionComp::ChangeValueByStep(bool bIncrease) {
}

UBMSetValueInteractionComp::UBMSetValueInteractionComp() {
    this->IncreaseTime = 0.10f;
    this->DecreaseTime = 0.10f;
    this->UpdateValueWithoutConfirming = true;
    this->StartInteractionValue = 0.00f;
    this->CurrentInputValue = 0.00f;
    this->ValueMax = 100.00f;
    this->ValueMin = 0.00f;
    this->ValueChangeStepSize = 1.00f;
    this->AudioAssetList = NULL;
}

