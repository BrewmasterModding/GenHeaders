#pragma once
#include "CoreMinimal.h"
#include "BP_OnTweenVector2DChangeDelegate.generated.h"

class UTweenVector2D;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBP_OnTweenVector2DChange, UTweenVector2D*, Tween);

