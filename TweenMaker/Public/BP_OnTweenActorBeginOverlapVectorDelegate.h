#pragma once
#include "CoreMinimal.h"
#include "BP_OnTweenActorBeginOverlapVectorDelegate.generated.h"

class UTweenVector;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBP_OnTweenActorBeginOverlapVector, UTweenVector*, Tween, AActor*, ThisActor, AActor*, OtherActor);

