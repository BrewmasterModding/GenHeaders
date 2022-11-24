#include "TweenFloatStandardFactory.h"

class UTweenContainer;
class UWidget;
class USplineComponent;
class UTweenFloat;
class USceneComponent;
class AActor;
class UMaterialInstanceDynamic;
class UObject;
class UTweenManagerComponent;

UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenWidgetOpacityTo(UTweenContainer*& TweenContainer, UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenWidgetAngleTo(UTweenContainer*& TweenContainer, UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenSceneComponentFollowSpline(UTweenContainer*& TweenContainer, USceneComponent*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenRotateSceneComponentAroundPointByOffset(UTweenContainer*& TweenContainer, USceneComponent*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenRotateSceneComponentAroundPoint(UTweenContainer*& TweenContainer, USceneComponent*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenRotateActorAroundPointByOffset(UTweenContainer*& TweenContainer, AActor*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenRotateActorAroundPoint(UTweenContainer*& TweenContainer, AActor*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenMaterialFloatTo(UTweenContainer*& TweenContainer, UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenMaterialFloatFromTo(UTweenContainer*& TweenContainer, UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenCustomFloat(UTweenContainer*& TweenContainer, UObject*& TweenTarget, float From, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenActorFollowSpline(UTweenContainer*& TweenContainer, AActor*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

void UTweenFloatStandardFactory::BP_CreateTweenWidgetOpacityTo(UTweenManagerComponent* TweenManager, UWidget*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
}

void UTweenFloatStandardFactory::BP_CreateTweenWidgetAngleTo(UTweenManagerComponent* TweenManager, UWidget*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
}

void UTweenFloatStandardFactory::BP_CreateTweenSceneComponentFollowSpline(UTweenManagerComponent* TweenManager, USceneComponent*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
}

void UTweenFloatStandardFactory::BP_CreateTweenRotateSceneComponentAroundPointByOffset(UTweenManagerComponent* TweenManager, USceneComponent*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
}

void UTweenFloatStandardFactory::BP_CreateTweenRotateSceneComponentAroundPoint(UTweenManagerComponent* TweenManager, USceneComponent*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
}

void UTweenFloatStandardFactory::BP_CreateTweenRotateActorAroundPointByOffset(UTweenManagerComponent* TweenManager, AActor*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
}

void UTweenFloatStandardFactory::BP_CreateTweenRotateActorAroundPoint(UTweenManagerComponent* TweenManager, AActor*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
}

void UTweenFloatStandardFactory::BP_CreateTweenMaterialFloatTo(UTweenManagerComponent* TweenManager, UMaterialInstanceDynamic*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
}

void UTweenFloatStandardFactory::BP_CreateTweenMaterialFloatFromTo(UTweenManagerComponent* TweenManager, UMaterialInstanceDynamic*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
}

void UTweenFloatStandardFactory::BP_CreateTweenCustomFloat(UTweenManagerComponent* TweenManager, UObject*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
}

void UTweenFloatStandardFactory::BP_CreateTweenActorFollowSpline(UTweenManagerComponent* TweenManager, AActor*& TweenTarget, UTweenContainer*& TweenContainer, UTweenFloat*& Tween, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
}

UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenWidgetOpacityTo(UTweenContainer*& TweenContainer, UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenWidgetAngleTo(UTweenContainer*& TweenContainer, UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenSceneComponentFollowSpline(UTweenContainer*& TweenContainer, USceneComponent*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenRotateSceneComponentAroundPointByOffset(UTweenContainer*& TweenContainer, USceneComponent*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenRotateSceneComponentAroundPoint(UTweenContainer*& TweenContainer, USceneComponent*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenRotateActorAroundPointByOffset(UTweenContainer*& TweenContainer, AActor*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenRotateActorAroundPoint(UTweenContainer*& TweenContainer, AActor*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenMaterialFloatTo(UTweenContainer*& TweenContainer, UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenMaterialFloatFromTo(UTweenContainer*& TweenContainer, UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenCustomFloat(UTweenContainer*& TweenContainer, UObject*& TweenTarget, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenActorFollowSpline(UTweenContainer*& TweenContainer, AActor*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex) {
    return NULL;
}

UTweenFloatStandardFactory::UTweenFloatStandardFactory() {
}

