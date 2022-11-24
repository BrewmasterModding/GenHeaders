#include "BMBuildModeComponent.h"

class AActor;

void UBMBuildModeComponent::PlayInteractionAudio(EBMAudioAction AudioAction, AActor* DockingContext) {
}


void UBMBuildModeComponent::ExitSwapModeSafeGuard() {
}

void UBMBuildModeComponent::ConfirmSwap() {
}

void UBMBuildModeComponent::CancelSwap() {
}

UBMBuildModeComponent::UBMBuildModeComponent() {
    this->RootComp = NULL;
    this->SwapBoxCollisionComp = NULL;
    this->PlayerChar = NULL;
    this->PC = NULL;
    this->PlayerCamera = NULL;
    this->CarryState = ECarryState::NotCarried;
    this->InvalidPlacementMaterial = NULL;
    this->InvalidPlacementOpacity = 1.00f;
    this->bHasCollision = false;
    this->bHasPhysics = false;
    this->bCanRotate = true;
    this->bCanPlace = false;
    this->bValidTargetForPlacement = false;
    this->bIsOriginalMaterial = true;
    this->bCanCancel = true;
    this->RotationRate = 5.00f;
    this->CarryTraceDistance = 500.00f;
    this->CarryZAdjustment = 10.00f;
    this->SlideSpeed = 10;
    this->bPlacementSliderOn = false;
    this->bHasPlaceDownSocket = false;
    this->BMInteractingWith = EBMInteractingWith::NONE;
    this->bEnableSwapMode = false;
    this->bDisableRotation = false;
}

