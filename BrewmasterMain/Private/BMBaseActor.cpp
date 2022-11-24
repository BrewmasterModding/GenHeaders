#include "BMBaseActor.h"
#include "BMHighlightComponent.h"

class UPrimitiveComponent;


bool ABMBaseActor::SetupActorFromData() {
    return false;
}

void ABMBaseActor::SetSpecificMeshVisibility(EBMVisibilityMode VisibilityMode, bool Invisible, bool EffectChildrenComps, UPrimitiveComponent* Mesh) {
}

UBMHighlightComponent* ABMBaseActor::GetHighlightComp() {
    return NULL;
}

void ABMBaseActor::CheckedRegisterSelfWithSimulator() {
}

void ABMBaseActor::ChangeActorVisibilityMode(EBMVisibilityMode VisibilityMode, bool EffectAttachedActors, bool Invisible, bool EffectChildrenComps) {
}

void ABMBaseActor::ChangeActorScaleMode(EBMScaleMode ScaleMode, bool EffectAttachedActors) {
}

void ABMBaseActor::ChangeActorCollisionMode(EBMCollisionMode CollisionMode, bool EffectAttachedActors, bool Disable) {
}


ABMBaseActor::ABMBaseActor() {
    this->FadeTime = 2.00f;
    this->CameraDepthFadeLength = 50.00f;
    this->CameraDepthFadeOffset = 140.00f;
    this->HighlightComponent = CreateDefaultSubobject<UBMHighlightComponent>(TEXT("HighlightComponent"));
    this->bPermanentlyInLevel = false;
    this->bShouldAutoRegisterWithBrewSim = true;
    this->bShouldNotSave = false;
    this->bSaveComponentsOnly = false;
    this->bSaveChildActor = false;
    this->bLoadedFromSave = false;
    this->DisallowInteractions = false;
    this->IgnorePlayerCollision = true;
    this->NeverModifyCollision = false;
    this->NeverModifyScale = false;
    this->NeverModifyVisibility = false;
    this->TraceDistanceToPlayer = 0.00f;
}

