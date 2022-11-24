#pragma once
#include "CoreMinimal.h"
#include "BP_OnTweenActorBeginOverlapFloatDelegate.generated.h"

class UTweenFloat;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBP_OnTweenActorBeginOverlapFloat, UTweenFloat*, Tween, AActor*, ThisActor, AActor*, OtherActor);

