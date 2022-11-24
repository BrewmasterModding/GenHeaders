#pragma once
#include "CoreMinimal.h"
#include "BP_OnTweenActorBeginOverlapRotatorDelegate.generated.h"

class UTweenRotator;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBP_OnTweenActorBeginOverlapRotator, UTweenRotator*, Tween, AActor*, ThisActor, AActor*, OtherActor);

