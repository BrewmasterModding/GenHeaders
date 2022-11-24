#pragma once
#include "CoreMinimal.h"
#include "BP_OnTweenVectorChangeDelegate.generated.h"

class UTweenVector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBP_OnTweenVectorChange, UTweenVector*, Tween);

