#pragma once
#include "CoreMinimal.h"
#include "BP_OnTweenRotatorChangeDelegate.generated.h"

class UTweenRotator;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBP_OnTweenRotatorChange, UTweenRotator*, Tween);

