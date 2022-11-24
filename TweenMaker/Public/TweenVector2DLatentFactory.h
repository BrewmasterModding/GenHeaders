#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "BP_OnTweenVector2DChangeDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ETweenEaseType.h"
#include "ETweenLoopType.h"
#include "TweenVector2DLatentFactory.generated.h"

class UTweenVector2D;
class UTweenVector2DLatentFactory;
class UTweenContainer;
class UWidget;
class UObject;
class UTweenManagerComponent;

UCLASS()
class TWEENMAKER_API UTweenVector2DLatentFactory : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenVector2DChange OnTweenStart;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenVector2DChange OnTweenUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenVector2DChange OnTweenEnd;
    
    UTweenVector2DLatentFactory();
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_JoinLatentTweenShearWidgetTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_JoinLatentTweenScaleWidgetTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_JoinLatentTweenScaleWidgetBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_JoinLatentTweenMoveWidgetTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_JoinLatentTweenMoveWidgetBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_JoinLatentTweenCustomVector2D(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, UPARAM(Ref) UObject*& TweenTarget, FVector2D From, FVector2D To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_CreateLatentTweenShearWidgetTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_CreateLatentTweenScaleWidgetTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_CreateLatentTweenScaleWidgetBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, FVector2D bY, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_CreateLatentTweenMoveWidgetTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_CreateLatentTweenMoveWidgetBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, FVector2D bY, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_CreateLatentTweenCustomVector2D(UTweenManagerComponent* TweenManager, UPARAM(Ref) UObject*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, FVector2D From, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_AppendLatentTweenShearWidgetTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_AppendLatentTweenScaleWidgetTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_AppendLatentTweenScaleWidgetBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_AppendLatentTweenMoveWidgetTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_AppendLatentTweenMoveWidgetBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2DLatentFactory* BP_AppendLatentTweenCustomVector2D(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector2D*& OutTween, UPARAM(Ref) UObject*& TweenTarget, FVector2D From, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
};

