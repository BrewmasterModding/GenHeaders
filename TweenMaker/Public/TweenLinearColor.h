#pragma once
#include "CoreMinimal.h"
#include "BaseTween.h"
#include "BP_OnTweenLinearColorChangeDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "TweenLinearColor.generated.h"

UCLASS()
class TWEENMAKER_API UTweenLinearColor : public UBaseTween {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenLinearColorChange OnTweenStart;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenLinearColorChange OnTweenUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenLinearColorChange OnTweenEnd;
    
    UTweenLinearColor();
    UFUNCTION(BlueprintPure)
    FLinearColor GetCurrentValue() const;
    
};

