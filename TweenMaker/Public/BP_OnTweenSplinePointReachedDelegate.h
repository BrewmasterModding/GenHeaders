#pragma once
#include "CoreMinimal.h"
#include "BP_OnTweenSplinePointReachedDelegate.generated.h"

class UTweenFloat;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBP_OnTweenSplinePointReached, UTweenFloat*, Tween, int32, PointIndex);

