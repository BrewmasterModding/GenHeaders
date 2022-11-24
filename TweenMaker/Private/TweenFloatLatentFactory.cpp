#include "TweenFloatLatentFactory.h"

class UTweenFloatLatentFactory;
class UTweenContainer;
class USplineComponent;
class UTweenFloat;
class UWidget;
class USceneComponent;
class AActor;
class UMaterialInstanceDynamic;
class UObject;
class UTweenManagerComponent;

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenWidgetOpacityTo(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenWidgetAngleTo(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenSceneComponentFollowSpline(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, USceneComponent*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, USceneComponent*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenRotateSceneComponentAroundPoint(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, USceneComponent*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenRotateActorAroundPointByOffset(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, AActor*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenRotateActorAroundPoint(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, AActor*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenMaterialFloatTo(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenMaterialFloatFromTo(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenCustomFloat(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, UObject*& TweenTarget, float From, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenActorFollowSpline(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, AActor*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenWidgetOpacityTo(UTweenManagerComponent* TweenManager, UWidget*& TweenTarget, UTweenContainer*& OutTweenContainer, UTweenFloat*& OutTween, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenWidgetAngleTo(UTweenManagerComponent* TweenManager, UWidget*& TweenTarget, UTweenContainer*& OutTweenContainer, UTweenFloat*& OutTween, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenSceneComponentFollowSpline(UTweenManagerComponent* TweenManager, USceneComponent*& TweenTarget, UTweenContainer*& OutTweenContainer, UTweenFloat*& OutTween, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset(UTweenManagerComponent* TweenManager, USceneComponent*& TweenTarget, UTweenContainer*& OutTweenContainer, UTweenFloat*& OutTween, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenRotateSceneComponentAroundPoint(UTweenManagerComponent* TweenManager, USceneComponent*& TweenTarget, UTweenContainer*& OutTweenContainer, UTweenFloat*& OutTween, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenRotateActorAroundPointByOffset(UTweenManagerComponent* TweenManager, AActor*& TweenTarget, UTweenContainer*& OutTweenContainer, UTweenFloat*& OutTween, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenRotateActorAroundPoint(UTweenManagerComponent* TweenManager, AActor*& TweenTarget, UTweenContainer*& OutTweenContainer, UTweenFloat*& OutTween, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenMaterialFloatTo(UTweenManagerComponent* TweenManager, UMaterialInstanceDynamic*& TweenTarget, UTweenContainer*& OutTweenContainer, UTweenFloat*& OutTween, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenMaterialFloatFromTo(UTweenManagerComponent* TweenManager, UMaterialInstanceDynamic*& TweenTarget, UTweenContainer*& OutTweenContainer, UTweenFloat*& OutTween, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenCustomFloat(UTweenManagerComponent* TweenManager, UObject*& TweenTarget, UTweenContainer*& OutTweenContainer, UTweenFloat*& OutTween, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenActorFollowSpline(UTweenManagerComponent* TweenManager, AActor*& TweenTarget, UTweenContainer*& OutTweenContainer, UTweenFloat*& OutTween, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenWidgetOpacityTo(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenWidgetAngleTo(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenSceneComponentFollowSpline(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, USceneComponent*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, USceneComponent*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenRotateSceneComponentAroundPoint(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, USceneComponent*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenRotateActorAroundPointByOffset(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, AActor*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenRotateActorAroundPoint(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, AActor*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenMaterialFloatTo(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenMaterialFloatFromTo(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenCustomFloat(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, UObject*& TweenTarget, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenActorFollowSpline(UTweenContainer*& TweenContainer, UTweenFloat*& OutTween, AActor*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloatLatentFactory::UTweenFloatLatentFactory() {
}

