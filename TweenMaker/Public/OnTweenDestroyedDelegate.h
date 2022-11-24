#pragma once
#include "CoreMinimal.h"
#include "OnTweenDestroyedDelegate.generated.h"

class UBaseTween;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTweenDestroyed, UBaseTween*, pTween);

