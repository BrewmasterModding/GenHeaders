#pragma once
#include "CoreMinimal.h"
#include "BP_OnTweenContainerEndDelegate.generated.h"

class UTweenContainer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBP_OnTweenContainerEnd, UTweenContainer*, TweenContainer);

