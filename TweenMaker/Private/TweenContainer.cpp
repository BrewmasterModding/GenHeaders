#include "TweenContainer.h"

class UObject;
class UBaseTween;

void UTweenContainer::TogglePauseTweenContainer() {
}

void UTweenContainer::SetTimeScale(float NewTimeScale) {
}

void UTweenContainer::SetPersistent(bool Persistent) {
}

void UTweenContainer::SetLoop(int32 NumLoops, ETweenLoopType LoopType) {
}

void UTweenContainer::ResumeTweenContainer() {
}

void UTweenContainer::RestartTweenContainer() {
}

void UTweenContainer::PauseTweenContainer() {
}

bool UTweenContainer::IsPaused() const {
    return false;
}

bool UTweenContainer::IsObjectTweeningInContainer(UObject*& TweenTarget, ETweenGenericType TweensType, UBaseTween*& TweenFound) const {
    return false;
}

bool UTweenContainer::HasEnded() const {
    return false;
}

void UTweenContainer::DeleteTweensInContainerByObject(UObject*& TweenTarget, ETweenGenericType TweensType) {
}

void UTweenContainer::DeleteTweenContainer(bool pCompleteAllTweensPriorToDeletion) {
}

UTweenContainer::UTweenContainer() {
    this->OwningTweenManager = NULL;
}

