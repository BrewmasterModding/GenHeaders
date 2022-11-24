#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "BP_OnTweenFloatChangeDelegate.h"
#include "ETweenEaseType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ETweenReferenceAxis.h"
#include "ETweenLoopType.h"
#include "TweenFloatLatentFactory.generated.h"

class UTweenContainer;
class UTweenFloatLatentFactory;
class UTweenFloat;
class UWidget;
class USceneComponent;
class USplineComponent;
class AActor;
class UMaterialInstanceDynamic;
class UObject;
class UTweenManagerComponent;

UCLASS()
class TWEENMAKER_API UTweenFloatLatentFactory : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenFloatChange OnTweenStart;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenFloatChange OnTweenUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenFloatChange OnTweenEnd;
    
    UTweenFloatLatentFactory();
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_JoinLatentTweenWidgetOpacityTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_JoinLatentTweenWidgetAngleTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_JoinLatentTweenSceneComponentFollowSpline(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_JoinLatentTweenRotateSceneComponentAroundPoint(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_JoinLatentTweenRotateActorAroundPointByOffset(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_JoinLatentTweenRotateActorAroundPoint(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_JoinLatentTweenMaterialFloatTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_JoinLatentTweenMaterialFloatFromTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_JoinLatentTweenCustomFloat(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) UObject*& TweenTarget, float From, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_JoinLatentTweenActorFollowSpline(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) AActor*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_CreateLatentTweenWidgetOpacityTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_CreateLatentTweenWidgetAngleTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_CreateLatentTweenSceneComponentFollowSpline(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_CreateLatentTweenRotateSceneComponentAroundPoint(UTweenManagerComponent* TweenManager, UPARAM(Ref) USceneComponent*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_CreateLatentTweenRotateActorAroundPointByOffset(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_CreateLatentTweenRotateActorAroundPoint(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_CreateLatentTweenMaterialFloatTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_CreateLatentTweenMaterialFloatFromTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_CreateLatentTweenCustomFloat(UTweenManagerComponent* TweenManager, UPARAM(Ref) UObject*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_CreateLatentTweenActorFollowSpline(UTweenManagerComponent* TweenManager, UPARAM(Ref) AActor*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_AppendLatentTweenWidgetOpacityTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_AppendLatentTweenWidgetAngleTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_AppendLatentTweenSceneComponentFollowSpline(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_AppendLatentTweenRotateSceneComponentAroundPoint(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) USceneComponent*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_AppendLatentTweenRotateActorAroundPointByOffset(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_AppendLatentTweenRotateActorAroundPoint(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) AActor*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_AppendLatentTweenMaterialFloatTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_AppendLatentTweenMaterialFloatFromTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_AppendLatentTweenCustomFloat(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) UObject*& TweenTarget, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenFloatLatentFactory* BP_AppendLatentTweenActorFollowSpline(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenFloat*& OutTween, UPARAM(Ref) AActor*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
};

