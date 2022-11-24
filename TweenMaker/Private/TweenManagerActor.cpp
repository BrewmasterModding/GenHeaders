#include "TweenManagerActor.h"

class UObject;
class UBaseTween;
class UTweenContainer;

bool ATweenManagerActor::IsObjectTweening(UObject*& TweenTarget, ETweenGenericType TweensType, UBaseTween*& TweenFound) {
    return false;
}

bool ATweenManagerActor::FindTweenByName(FName TweenName, ETweenGenericType TweenType, UBaseTween*& TweenFound) {
    return false;
}

bool ATweenManagerActor::DeleteAllTweensByObject(UObject*& TweenTarget, ETweenGenericType TweensType) {
    return false;
}

int32 ATweenManagerActor::DeleteAllTweens() {
    return 0;
}

void ATweenManagerActor::BP_CreateTweenContainerStatic(UTweenContainer*& TweenContainer, int32 NumLoops, ETweenLoopType LoopType, float TimeScale) {
}

ATweenManagerActor::ATweenManagerActor() {
}

