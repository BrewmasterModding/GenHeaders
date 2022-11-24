#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "BP_OnTweenRotatorChangeDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ETweenEaseType.h"
#include "ETweenLoopType.h"
#include "TweenRotatorLatentFactory.generated.h"

class UTweenRotatorLatentFactory;
class UTweenRotator;
class UTweenContainer;
class USceneComponent;
class AActor;
class UTweenManagerComponent;

UCLASS()
class TWEENMAKER_API UTweenRotatorLatentFactory : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenRotatorChange OnTweenStart;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenRotatorChange OnTweenUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenRotatorChange OnTweenEnd;
    
    UTweenRotatorLatentFactory();
    UFUNCTION(BlueprintCallable)
    static UTweenRotatorLatentFactory* BP_JoinLatentTweenRotateSceneComponentTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenRotator*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotatorLatentFactory* BP_JoinLatentTweenRotateSceneComponentBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenRotator*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotatorLatentFactory* BP_JoinLatentTweenRotateActorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenRotator*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotatorLatentFactory* BP_JoinLatentTweenRotateActorBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenRotator*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotatorLatentFactory* BP_CreateLatentTweenRotateSceneComponentTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenRotator*& OutTween, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotatorLatentFactory* BP_CreateLatentTweenRotateSceneComponentBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenRotator*& OutTween, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotatorLatentFactory* BP_CreateLatentTweenRotateActorTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenRotator*& OutTween, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotatorLatentFactory* BP_CreateLatentTweenRotateActorBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenRotator*& OutTween, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotatorLatentFactory* BP_AppendLatentTweenRotateSceneComponentTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenRotator*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotatorLatentFactory* BP_AppendLatentTweenRotateSceneComponentBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenRotator*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotatorLatentFactory* BP_AppendLatentTweenRotateActorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenRotator*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotatorLatentFactory* BP_AppendLatentTweenRotateActorBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenRotator*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
};

