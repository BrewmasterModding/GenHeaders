#include "TweenManagerComponent.h"

class UBaseTween;
class UObject;
class UTweenContainer;

void UTweenManagerComponent::UpdateNameMap(UBaseTween* pTween, const FName& pPreviousName, const FName& pNewName) {
}

void UTweenManagerComponent::TweenDestroyed(UBaseTween* pTween) {
}

bool UTweenManagerComponent::IsObjectTweening(UObject*& TweenTarget, ETweenGenericType TweensType, UBaseTween*& TweenFound) const {
    return false;
}

bool UTweenManagerComponent::FindTweenByName(FName TweenName, ETweenGenericType TweenType, UBaseTween*& TweenFound) const {
    return false;
}

bool UTweenManagerComponent::DeleteAllTweensByObject(UObject*& TweenTarget, ETweenGenericType TweensType) {
    return false;
}

int32 UTweenManagerComponent::DeleteAllTweens() {
    return 0;
}

void UTweenManagerComponent::BP_CreateTweenContainer(UTweenContainer*& TweenContainer, int32 NumLoops, ETweenLoopType LoopType, float TimeScale) {
}

UTweenManagerComponent::UTweenManagerComponent() {
}

