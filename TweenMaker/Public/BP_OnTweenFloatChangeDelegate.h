#pragma once
#include "CoreMinimal.h"
#include "BP_OnTweenFloatChangeDelegate.generated.h"

class UTweenFloat;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBP_OnTweenFloatChange, UTweenFloat*, Tween);

