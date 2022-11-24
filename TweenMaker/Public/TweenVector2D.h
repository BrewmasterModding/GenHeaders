#pragma once
#include "CoreMinimal.h"
#include "BaseTween.h"
#include "BP_OnTweenVector2DChangeDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "TweenVector2D.generated.h"

UCLASS()
class TWEENMAKER_API UTweenVector2D : public UBaseTween {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenVector2DChange OnTweenStart;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenVector2DChange OnTweenUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenVector2DChange OnTweenEnd;
    
    UTweenVector2D();
    UFUNCTION(BlueprintPure)
    FVector2D GetCurrentValue() const;
    
};

