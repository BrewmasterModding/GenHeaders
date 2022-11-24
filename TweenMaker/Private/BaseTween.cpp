#include "BaseTween.h"

class UTweenLinearColor;
class UCurveFloat;
class UTweenVector;
class UWidget;
class UTweenFloat;
class UTweenVector2D;
class USceneComponent;
class USplineComponent;
class AActor;
class UTweenRotator;
class UMaterialInstanceDynamic;
class UObject;
class UTweenContainer;

void UBaseTween::TogglePauseTween(bool SkipTween) {
}

void UBaseTween::SetTweenName(FName TweenName) {
}

void UBaseTween::SetTimeScale(float NewTimeScale) {
}

void UBaseTween::SetDelay(float NewDelay) {
}

void UBaseTween::SetCustomEasisng(UCurveFloat* Curve) {
}

void UBaseTween::ResumeTween() {
}

void UBaseTween::RestartTween() {
}

void UBaseTween::PauseTween(bool SkipTween) {
}

UTweenFloat* UBaseTween::JoinTweenWidgetOpacityTo(UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenLinearColor* UBaseTween::JoinTweenWidgetColorTo(UWidget*& TweenTarget, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenLinearColor* UBaseTween::JoinTweenWidgetColorFromTo(UWidget*& TweenTarget, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::JoinTweenWidgetAngleTo(UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector2D* UBaseTween::JoinTweenShearWidgetTo(UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::JoinTweenSceneComponentFollowSpline(USceneComponent*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector2D* UBaseTween::JoinTweenScaleWidgetTo(UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector2D* UBaseTween::JoinTweenScaleWidgetBy(UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::JoinTweenScaleSceneComponentTo(USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::JoinTweenScaleSceneComponentBy(USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::JoinTweenScaleActorTo(AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::JoinTweenScaleActorBy(AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenRotator* UBaseTween::JoinTweenRotateSceneComponentTo(USceneComponent*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenRotator* UBaseTween::JoinTweenRotateSceneComponentBy(USceneComponent*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::JoinTweenRotateSceneComponentAroundPointByOffset(USceneComponent*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::JoinTweenRotateSceneComponentAroundPoint(USceneComponent*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenRotator* UBaseTween::JoinTweenRotateActorTo(AActor*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenRotator* UBaseTween::JoinTweenRotateActorBy(AActor*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::JoinTweenRotateActorAroundPointByOffset(AActor*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::JoinTweenRotateActorAroundPoint(AActor*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector2D* UBaseTween::JoinTweenMoveWidgetTo(UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector2D* UBaseTween::JoinTweenMoveWidgetBy(UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::JoinTweenMoveSceneComponentTo(USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::JoinTweenMoveSceneComponentBy(USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::JoinTweenMoveActorTo(AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::JoinTweenMoveActorBy(AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenLinearColor* UBaseTween::JoinTweenMaterialVectorTo(UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenLinearColor* UBaseTween::JoinTweenMaterialVectorFromTo(UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::JoinTweenMaterialFloatTo(UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::JoinTweenMaterialFloatFromTo(UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector2D* UBaseTween::JoinTweenCustomVector2D(UObject*& TweenTarget, FVector2D From, FVector2D To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::JoinTweenCustomVector(UObject*& TweenTarget, FVector From, FVector To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::JoinTweenCustomFloat(UObject*& TweenTarget, float From, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::JoinTweenActorFollowSpline(AActor*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

bool UBaseTween::IsTweenPaused() const {
    return false;
}

bool UBaseTween::IsTweening() const {
    return false;
}

UObject* UBaseTween::GetTweenTarget() const {
    return NULL;
}

FName UBaseTween::GetTweenName() const {
    return NAME_None;
}

float UBaseTween::GetTweenElapsedTime() const {
    return 0.0f;
}

float UBaseTween::GetTweenDuration() const {
    return 0.0f;
}

UTweenContainer* UBaseTween::GetTweenContainer() const {
    return NULL;
}

float UBaseTween::GetTimeScale() const {
    return 0.0f;
}

void UBaseTween::DeleteTween(bool FireEndEvent) {
}

UTweenFloat* UBaseTween::AppendTweenWidgetOpacityTo(UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenLinearColor* UBaseTween::AppendTweenWidgetColorTo(UWidget*& TweenTarget, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenLinearColor* UBaseTween::AppendTweenWidgetColorFromTo(UWidget*& TweenTarget, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::AppendTweenWidgetAngleTo(UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector2D* UBaseTween::AppendTweenShearWidgetTo(UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::AppendTweenSceneComponentFollowSpline(USceneComponent*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector2D* UBaseTween::AppendTweenScaleWidgetTo(UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector2D* UBaseTween::AppendTweenScaleWidgetBy(UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::AppendTweenScaleSceneComponentTo(USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::AppendTweenScaleSceneComponentBy(USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::AppendTweenScaleActorTo(AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::AppendTweenScaleActorBy(AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenRotator* UBaseTween::AppendTweenRotateSceneComponentTo(USceneComponent*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenRotator* UBaseTween::AppendTweenRotateSceneComponentBy(USceneComponent*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::AppendTweenRotateSceneComponentAroundPointByOffset(USceneComponent*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::AppendTweenRotateSceneComponentAroundPoint(USceneComponent*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenRotator* UBaseTween::AppendTweenRotateActorTo(AActor*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenRotator* UBaseTween::AppendTweenRotateActorBy(AActor*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::AppendTweenRotateActorAroundPointByOffset(AActor*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::AppendTweenRotateActorAroundPoint(AActor*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector2D* UBaseTween::AppendTweenMoveWidgetTo(UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector2D* UBaseTween::AppendTweenMoveWidgetBy(UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::AppendTweenMoveSceneComponentTo(USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::AppendTweenMoveSceneComponentBy(USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::AppendTweenMoveActorTo(AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::AppendTweenMoveActorBy(AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenLinearColor* UBaseTween::AppendTweenMaterialVectorTo(UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenLinearColor* UBaseTween::AppendTweenMaterialVectorFromTo(UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::AppendTweenMaterialFloatTo(UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::AppendTweenMaterialFloatFromTo(UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector2D* UBaseTween::AppendTweenCustomVector2D(UObject*& TweenTarget, FVector2D From, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenVector* UBaseTween::AppendTweenCustomVector(UObject*& TweenTarget, FVector From, FVector To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::AppendTweenCustomFloat(UObject*& TweenTarget, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UTweenFloat* UBaseTween::AppendTweenActorFollowSpline(AActor*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused) {
    return NULL;
}

UBaseTween::UBaseTween() {
    this->mCurveFloat = NULL;
    this->mOwningTweenContainer = NULL;
}

