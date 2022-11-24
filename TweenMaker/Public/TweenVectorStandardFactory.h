#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ETweenEaseType.h"
#include "ETweenLoopType.h"
#include "TweenVectorStandardFactory.generated.h"

class UTweenVector;
class UTweenContainer;
class USceneComponent;
class UTweenManagerComponent;
class AActor;

UCLASS(BlueprintType)
class TWEENMAKER_API UTweenVectorStandardFactory : public UObject {
    GENERATED_BODY()
public:
    UTweenVectorStandardFactory();
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_JoinTweenScaleSceneComponentTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_JoinTweenScaleSceneComponentBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_JoinTweenScaleActorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_JoinTweenScaleActorBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_JoinTweenMoveSceneComponentTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_JoinTweenMoveSceneComponentBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_JoinTweenMoveActorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_JoinTweenMoveActorBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_JoinTweenCustomVector(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UObject*& TweenTarget, FVector From, FVector To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenScaleSceneComponentTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UTweenContainer*& TweenContainer, UTweenVector*& Tween, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenScaleSceneComponentBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UTweenContainer*& TweenContainer, UTweenVector*& Tween, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenScaleActorTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UTweenContainer*& TweenContainer, UTweenVector*& Tween, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenScaleActorBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UTweenContainer*& TweenContainer, UTweenVector*& Tween, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenMoveSceneComponentTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UTweenContainer*& TweenContainer, UTweenVector*& Tween, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenMoveSceneComponentBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UTweenContainer*& TweenContainer, UTweenVector*& Tween, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenMoveActorTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UTweenContainer*& TweenContainer, UTweenVector*& Tween, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenMoveActorBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UTweenContainer*& TweenContainer, UTweenVector*& Tween, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenCustomVector(UTweenManagerComponent* TweenManager, UPARAM(Ref) UObject*& TweenTarget, UTweenContainer*& TweenContainer, UTweenVector*& Tween, FVector From, FVector To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_AppendTweenScaleSceneComponentTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_AppendTweenScaleSceneComponentBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_AppendTweenScaleActorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_AppendTweenScaleActorBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_AppendTweenMoveSceneComponentTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_AppendTweenMoveSceneComponentBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_AppendTweenMoveActorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_AppendTweenMoveActorBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVector* BP_AppendTweenCustomVector(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UObject*& TweenTarget, FVector From, FVector To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
};

