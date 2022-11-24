#pragma once
#include "CoreMinimal.h"
#include "BP_OnTweenLinearColorChangeDelegate.generated.h"

class UTweenLinearColor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBP_OnTweenLinearColorChange, UTweenLinearColor*, Tween);

