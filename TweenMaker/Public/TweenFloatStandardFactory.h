#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ETweenEaseType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ETweenReferenceAxis.h"
#include "ETweenLoopType.h"
#include "TweenFloatStandardFactory.generated.h"

class UWidget;
class USplineComponent;
class UTweenFloat;
class UTweenContainer;
class USceneComponent;
class AActor;
class UMaterialInstanceDynamic;
class UTweenManagerComponent;

UCLASS(BlueprintType)
class TWEENMAKER_API UTweenFloatStandardFactory : public UObject {
    GENERATED_BODY()
public:
    UTweenFloatStandardFactory();
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_JoinTweenWidgetOpacityTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_JoinTweenWidgetAngleTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_JoinTweenSceneComponentFollowSpline(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_JoinTweenRotateSceneComponentAroundPointByOffset(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_JoinTweenRotateSceneComponentAroundPoint(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_JoinTweenRotateActorAroundPointByOffset(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_JoinTweenRotateActorAroundPoint(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_JoinTweenMaterialFloatTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_JoinTweenMaterialFloatFromTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_JoinTweenCustomFloat(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UObject*& TweenTarget, float From, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_JoinTweenActorFollowSpline(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenWidgetOpacityTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenWidgetAngleTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenSceneComponentFollowSpline(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenRotateSceneComponentAroundPointByOffset(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenRotateSceneComponentAroundPoint(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenRotateActorAroundPointByOffset(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenRotateActorAroundPoint(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenMaterialFloatTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenMaterialFloatFromTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenCustomFloat(UTweenManagerComponent* TweenManager, UPARAM(Ref) UObject*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenActorFollowSpline(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_AppendTweenWidgetOpacityTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_AppendTweenWidgetAngleTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_AppendTweenSceneComponentFollowSpline(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_AppendTweenRotateSceneComponentAroundPointByOffset(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_AppendTweenRotateSceneComponentAroundPoint(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) USceneComponent*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_AppendTweenRotateActorAroundPointByOffset(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_AppendTweenRotateActorAroundPoint(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_AppendTweenMaterialFloatTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_AppendTweenMaterialFloatFromTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_AppendTweenCustomFloat(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UObject*& TweenTarget, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloat* BP_AppendTweenActorFollowSpline(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) AActor*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
};

