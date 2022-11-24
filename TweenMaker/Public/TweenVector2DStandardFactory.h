#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ETweenLoopType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ETweenEaseType.h"
#include "TweenVector2DStandardFactory.generated.h"

class UWidget;
class UTweenVector2D;
class UTweenContainer;
class UTweenManagerComponent;

UCLASS(BlueprintType)
class TWEENMAKER_API UTweenVector2DStandardFactory : public UObject {
    GENERATED_BODY()
public:
    UTweenVector2DStandardFactory();
    UFUNCTION(BlueprintCallable)
    static UTweenVector2D* BP_JoinTweenShearWidgetTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2D* BP_JoinTweenScaleWidgetTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2D* BP_JoinTweenScaleWidgetBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2D* BP_JoinTweenMoveWidgetTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2D* BP_JoinTweenMoveWidgetBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2D* BP_JoinTweenCustomVector2D(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UObject*& TweenTarget, FVector2D From, FVector2D To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenShearWidgetTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UTweenContainer*& TweenContainer, UTweenVector2D*& Tween, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenScaleWidgetTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UTweenContainer*& TweenContainer, UTweenVector2D*& Tween, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenScaleWidgetBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UTweenContainer*& TweenContainer, UTweenVector2D*& Tween, FVector2D bY, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenMoveWidgetTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UTweenContainer*& TweenContainer, UTweenVector2D*& Tween, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenMoveWidgetBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UTweenContainer*& TweenContainer, UTweenVector2D*& Tween, FVector2D bY, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenCustomVector2D(UTweenManagerComponent* TweenManager, UPARAM(Ref) UObject*& TweenTarget, UTweenContainer*& TweenContainer, UTweenVector2D*& Tween, FVector2D From, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2D* BP_AppendTweenShearWidgetTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2D* BP_AppendTweenScaleWidgetTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2D* BP_AppendTweenScaleWidgetBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2D* BP_AppendTweenMoveWidgetTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2D* BP_AppendTweenMoveWidgetBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector2D* BP_AppendTweenCustomVector2D(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UObject*& TweenTarget, FVector2D From, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
};

