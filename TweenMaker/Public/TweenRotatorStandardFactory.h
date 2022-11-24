#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ETweenEaseType.h"
#include "ETweenLoopType.h"
#include "TweenRotatorStandardFactory.generated.h"

class UTweenContainer;
class UTweenRotator;
class USceneComponent;
class UTweenManagerComponent;
class AActor;

UCLASS(BlueprintType)
class TWEENMAKER_API UTweenRotatorStandardFactory : public UObject {
    GENERATED_BODY()
public:
    UTweenRotatorStandardFactory();
    UFUNCTION(BlueprintCallable)
    static UTweenRotator* BP_JoinTweenRotateSceneComponentTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotator* BP_JoinTweenRotateSceneComponentBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotator* BP_JoinTweenRotateActorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotator* BP_JoinTweenRotateActorBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenRotateSceneComponentTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UTweenContainer*& TweenContainer, UTweenRotator*& Tween, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenRotateSceneComponentBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UTweenContainer*& TweenContainer, UTweenRotator*& Tween, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenRotateActorTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UTweenContainer*& TweenContainer, UTweenRotator*& Tween, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenRotateActorBy(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UTweenContainer*& TweenContainer, UTweenRotator*& Tween, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotator* BP_AppendTweenRotateSceneComponentTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotator* BP_AppendTweenRotateSceneComponentBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotator* BP_AppendTweenRotateActorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenRotator* BP_AppendTweenRotateActorBy(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
};

