#include "BMBaseIngredientBag.h"
#include "BMPlayerAttachmentComponent.h"
#include "BMDockingAnimationComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

class UBMCarryableComponent;
class AActor;


void ABMBaseIngredientBag::SetClipHangerVisibility() {
}

void ABMBaseIngredientBag::CarryStateChanged(UBMCarryableComponent* CarryableComponent, AActor* Interactee) {
}

void ABMBaseIngredientBag::AttachmentStateChanged(AActor* Actor) {
}

ABMBaseIngredientBag::ABMBaseIngredientBag() {
    this->AttachmentComponent = CreateDefaultSubobject<UBMPlayerAttachmentComponent>(TEXT("AttachmentComponent"));
    this->DockingComponent = CreateDefaultSubobject<UBMDockingAnimationComponent>(TEXT("DockingComponent"));
    this->ClipHanger = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ClipHanger"));
    this->IngredientMaterial = NULL;
    this->IngredientMaterialInstance = NULL;
    this->AttachedParentCarryComp = NULL;
    this->SittingBag = NULL;
    this->Bag = NULL;
    this->BaseDampnessTriggered = false;
    this->TopHeightLagTime = 1.00f;
    this->BaseDampnessStart = 0.00f;
    this->BaseDampnessEnd = 0.15f;
    this->BaseDampnessFadeTime = 20.00f;
    this->bIsSitting = false;
    this->ClipVisible = false;
    this->BufferFromWall = 0.00f;
}

