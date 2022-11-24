#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BP_OnTweenActorHitVectorDelegate.generated.h"

class UTweenVector;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FBP_OnTweenActorHitVector, UTweenVector*, Tween, AActor*, ThisActor, AActor*, OtherActor, FVector, NormalImpulse, const FHitResult&, Hit);

