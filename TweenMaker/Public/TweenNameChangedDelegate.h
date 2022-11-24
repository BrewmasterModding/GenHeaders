#pragma once
#include "CoreMinimal.h"
#include "TweenNameChangedDelegate.generated.h"

class UBaseTween;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTweenNameChanged, UBaseTween*, pTween, const FName&, pPreviousName, const FName&, pNewName);

