#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "BP_OnTweenVectorChangeDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ETweenEaseType.h"
#include "ETweenLoopType.h"
#include "TweenVectorLatentFactory.generated.h"

class UTweenContainer;
class UTweenVectorLatentFactory;
class UTweenVector;
class USceneComponent;
class AActor;
class UObject;
class UTweenManagerComponent;

UCLASS()
class TWEENMAKER_API UTweenVectorLatentFactory : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenVectorChange OnTweenStart;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenVectorChange OnTweenUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenVectorChange OnTweenEnd;
    
    UTweenVectorLatentFactory();
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_JoinLatentTweenScaleSceneComponentTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_JoinLatentTweenScaleSceneComponentBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_JoinLatentTweenScaleActorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_JoinLatentTweenScaleActorBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_JoinLatentTweenMoveSceneComponentTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_JoinLatentTweenMoveSceneComponentBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_JoinLatentTweenMoveActorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_JoinLatentTweenMoveActorBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_JoinLatentTweenCustomVector(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) UObject*& TweenTarget, FVector From, FVector To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_CreateLatentTweenScaleSceneComponentTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenVector*& OutTween, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_CreateLatentTweenScaleSceneComponentBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenVector*& OutTween, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_CreateLatentTweenScaleActorTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenVector*& OutTween, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_CreateLatentTweenScaleActorBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenVector*& OutTween, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_CreateLatentTweenMoveSceneComponentTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenVector*& OutTween, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_CreateLatentTweenMoveSceneComponentBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenVector*& OutTween, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_CreateLatentTweenMoveActorTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenVector*& OutTween, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_CreateLatentTweenMoveActorBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenVector*& OutTween, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_CreateLatentTweenCustomVector(UTweenManagerComponent* TweenManager, UPARAM(Ref) UObject*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenVector*& OutTween, FVector From, FVector To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_AppendLatentTweenScaleSceneComponentTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_AppendLatentTweenScaleSceneComponentBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_AppendLatentTweenScaleActorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_AppendLatentTweenScaleActorBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_AppendLatentTweenMoveSceneComponentTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_AppendLatentTweenMoveSceneComponentBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_AppendLatentTweenMoveActorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_AppendLatentTweenMoveActorBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenVectorLatentFactory* BP_AppendLatentTweenCustomVector(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenVector*& OutTween, UPARAM(Ref) UObject*& TweenTarget, FVector From, FVector To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
};

