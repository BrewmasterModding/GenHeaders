#include "BMPlayerAttachmentComponent.h"

class AActor;

void UBMPlayerAttachmentComponent::TransferComplete() {
}

void UBMPlayerAttachmentComponent::DockComplete(AActor* ActorDocking) {
}

UBMPlayerAttachmentComponent::UBMPlayerAttachmentComponent() {
    this->DefaultSocketName = TEXT("ObjectRootSocket");
    this->MinClippableObjectSize = ESizeBand::NONE;
    this->MaxClippableObjectSize = ESizeBand::NONE;
    this->MinClippableIngredientSize = EBMIngredientContainerSize::Small;
    this->MaxClippableIngredientSize = EBMIngredientContainerSize::Small;
    this->MeshToPreview = NULL;
    this->ActorOutline = NULL;
    this->PreviewAttachToActor = NULL;
    this->bGhostPreviewActive = true;
    this->bShouldPreventPouring = true;
    this->bDebugCollisionDrawing = false;
    this->AdditionalCollider = NULL;
    this->bIsPlaceOnType = false;
    this->ContainerAttachmentType = EBMContainerAttachmentType::NONE;
}

