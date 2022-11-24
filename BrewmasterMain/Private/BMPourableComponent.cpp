#include "BMPourableComponent.h"

class AActor;

void UBMPourableComponent::TransferLiquid() {
}

void UBMPourableComponent::TransferIngredient() {
}

void UBMPourableComponent::StopAdjustPour(float NewPouringWidth, float NewPouringHeight, FVector NewSplinePosition) {
}

void UBMPourableComponent::OpeningContainerDoneLocAndRot(AActor* ActorCalledDocking) {
}

void UBMPourableComponent::OpeningContainerDone(AActor* ActorCalledDocking) {
}

void UBMPourableComponent::CompleteMovement() {
}

void UBMPourableComponent::AdjustPour(bool bIncreasePour) {
}

UBMPourableComponent::UBMPourableComponent() {
    this->AnalogueControlComp = NULL;
    this->ObjectTransferComp = NULL;
    this->CarryComponent = NULL;
    this->LidComponent = NULL;
    this->PourTarget = NULL;
    this->PouringIntoSink = NULL;
    this->InteracteeToTransferTo = NULL;
    this->IncreaseTime = 0.10f;
    this->DecreaseTime = 0.10f;
    this->PouringMaxHeight = 10.00f;
    this->PouringMaxHeightCurve = NULL;
    this->PouringAreaRotationChange = 0.50f;
    this->LiquidTransferScaler = 0.01f;
    this->PourSocketName = TEXT("Pouring");
    this->PouringState = ECarryState::Carried;
    this->IsPouring = false;
    this->ThrottlePourArea = 5.00f;
    this->ThrottleAbovePercent = 0.75f;
    this->MiniumPourSpeed = 1.00f;
    this->PouringRotationOffset = -105.00f;
    this->AdditionalYawOffset = -90.00f;
    this->LockToAxis = true;
}

