#include "BMShakingComponent.h"

void UBMShakingComponent::TransferIngredient() {
}

void UBMShakingComponent::CompleteMovement() {
}

void UBMShakingComponent::AnimationCallback() {
}

UBMShakingComponent::UBMShakingComponent() {
    this->ObjectTransferComp = NULL;
    this->CarryComponent = NULL;
    this->PourTarget = NULL;
    this->Animation = NULL;
    this->ZOffsetFromSocket = 20.00f;
    this->ShakeState = ECarryState::Carried;
    this->RotationOffset = -105.00f;
    this->AdditionalYawOffset = -150.00f;
    this->AdditionalPitch = -150.00f;
    this->ExtraZOffset = 10.00f;
    this->LockToAxis = false;
    this->ShakeAnimation = NULL;
}

