#pragma once
#include "CoreMinimal.h"
#include "OnAnimationFinishedDelegate.generated.h"

class ABMTube;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimationFinished, ABMTube*, Tube);

