#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ETweenEaseType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ETweenReferenceAxis.h"
#include "ETweenLoopType.h"
#include "BaseTween.generated.h"

class UTweenVector;
class UWidget;
class UTweenLinearColor;
class UCurveFloat;
class UTweenContainer;
class UTweenFloat;
class UTweenVector2D;
class USceneComponent;
class USplineComponent;
class AActor;
class UTweenRotator;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType)
class TWEENMAKER_API UBaseTween : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UCurveFloat* mCurveFloat;
    
private:
    UPROPERTY()
    UTweenContainer* mOwningTweenContainer;
    
public:
    UBaseTween();
    UFUNCTION(BlueprintCallable)
    void TogglePauseTween(bool SkipTween);
    
    UFUNCTION(BlueprintCallable)
    void SetTweenName(FName TweenName);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeScale(float NewTimeScale);
    
    UFUNCTION(BlueprintCallable)
    void SetDelay(float NewDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomEasisng(UCurveFloat* Curve);
    
    UFUNCTION(BlueprintCallable)
    void ResumeTween();
    
    UFUNCTION(BlueprintCallable)
    void RestartTween();
    
    UFUNCTION(BlueprintCallable)
    void PauseTween(bool SkipTween);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* JoinTweenWidgetOpacityTo(UPARAM(Ref) UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenLinearColor* JoinTweenWidgetColorTo(UPARAM(Ref) UWidget*& TweenTarget, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenLinearColor* JoinTweenWidgetColorFromTo(UPARAM(Ref) UWidget*& TweenTarget, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* JoinTweenWidgetAngleTo(UPARAM(Ref) UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector2D* JoinTweenShearWidgetTo(UPARAM(Ref) UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* JoinTweenSceneComponentFollowSpline(UPARAM(Ref) USceneComponent*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector2D* JoinTweenScaleWidgetTo(UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector2D* JoinTweenScaleWidgetBy(UPARAM(Ref) UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* JoinTweenScaleSceneComponentTo(UPARAM(Ref) USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* JoinTweenScaleSceneComponentBy(UPARAM(Ref) USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* JoinTweenScaleActorTo(UPARAM(Ref) AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* JoinTweenScaleActorBy(UPARAM(Ref) AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenRotator* JoinTweenRotateSceneComponentTo(UPARAM(Ref) USceneComponent*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenRotator* JoinTweenRotateSceneComponentBy(UPARAM(Ref) USceneComponent*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* JoinTweenRotateSceneComponentAroundPointByOffset(UPARAM(Ref) USceneComponent*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* JoinTweenRotateSceneComponentAroundPoint(UPARAM(Ref) USceneComponent*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenRotator* JoinTweenRotateActorTo(UPARAM(Ref) AActor*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenRotator* JoinTweenRotateActorBy(UPARAM(Ref) AActor*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* JoinTweenRotateActorAroundPointByOffset(UPARAM(Ref) AActor*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* JoinTweenRotateActorAroundPoint(UPARAM(Ref) AActor*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector2D* JoinTweenMoveWidgetTo(UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector2D* JoinTweenMoveWidgetBy(UPARAM(Ref) UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* JoinTweenMoveSceneComponentTo(UPARAM(Ref) USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* JoinTweenMoveSceneComponentBy(UPARAM(Ref) USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* JoinTweenMoveActorTo(UPARAM(Ref) AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* JoinTweenMoveActorBy(UPARAM(Ref) AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenLinearColor* JoinTweenMaterialVectorTo(UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenLinearColor* JoinTweenMaterialVectorFromTo(UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* JoinTweenMaterialFloatTo(UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* JoinTweenMaterialFloatFromTo(UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector2D* JoinTweenCustomVector2D(UPARAM(Ref) UObject*& TweenTarget, FVector2D From, FVector2D To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* JoinTweenCustomVector(UPARAM(Ref) UObject*& TweenTarget, FVector From, FVector To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* JoinTweenCustomFloat(UPARAM(Ref) UObject*& TweenTarget, float From, float To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* JoinTweenActorFollowSpline(UPARAM(Ref) AActor*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintPure)
    bool IsTweenPaused() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTweening() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetTweenTarget() const;
    
    UFUNCTION(BlueprintPure)
    FName GetTweenName() const;
    
    UFUNCTION(BlueprintPure)
    float GetTweenElapsedTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetTweenDuration() const;
    
    UFUNCTION(BlueprintPure)
    UTweenContainer* GetTweenContainer() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeScale() const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteTween(bool FireEndEvent);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* AppendTweenWidgetOpacityTo(UPARAM(Ref) UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenLinearColor* AppendTweenWidgetColorTo(UPARAM(Ref) UWidget*& TweenTarget, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenLinearColor* AppendTweenWidgetColorFromTo(UPARAM(Ref) UWidget*& TweenTarget, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* AppendTweenWidgetAngleTo(UPARAM(Ref) UWidget*& TweenTarget, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector2D* AppendTweenShearWidgetTo(UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* AppendTweenSceneComponentFollowSpline(UPARAM(Ref) USceneComponent*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector2D* AppendTweenScaleWidgetTo(UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector2D* AppendTweenScaleWidgetBy(UPARAM(Ref) UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* AppendTweenScaleSceneComponentTo(UPARAM(Ref) USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* AppendTweenScaleSceneComponentBy(UPARAM(Ref) USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* AppendTweenScaleActorTo(UPARAM(Ref) AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* AppendTweenScaleActorBy(UPARAM(Ref) AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenRotator* AppendTweenRotateSceneComponentTo(UPARAM(Ref) USceneComponent*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenRotator* AppendTweenRotateSceneComponentBy(UPARAM(Ref) USceneComponent*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* AppendTweenRotateSceneComponentAroundPointByOffset(UPARAM(Ref) USceneComponent*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* AppendTweenRotateSceneComponentAroundPoint(UPARAM(Ref) USceneComponent*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenRotator* AppendTweenRotateActorTo(UPARAM(Ref) AActor*& TweenTarget, FRotator To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenRotator* AppendTweenRotateActorBy(UPARAM(Ref) AActor*& TweenTarget, FRotator bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* AppendTweenRotateActorAroundPointByOffset(UPARAM(Ref) AActor*& TweenTarget, FVector PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* AppendTweenRotateActorAroundPoint(UPARAM(Ref) AActor*& TweenTarget, FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, FVector Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector2D* AppendTweenMoveWidgetTo(UPARAM(Ref) UWidget*& TweenTarget, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector2D* AppendTweenMoveWidgetBy(UPARAM(Ref) UWidget*& TweenTarget, FVector2D bY, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* AppendTweenMoveSceneComponentTo(UPARAM(Ref) USceneComponent*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* AppendTweenMoveSceneComponentBy(UPARAM(Ref) USceneComponent*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* AppendTweenMoveActorTo(UPARAM(Ref) AActor*& TweenTarget, FVector To, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* AppendTweenMoveActorBy(UPARAM(Ref) AActor*& TweenTarget, FVector bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenLinearColor* AppendTweenMaterialVectorTo(UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenLinearColor* AppendTweenMaterialVectorFromTo(UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* AppendTweenMaterialFloatTo(UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* AppendTweenMaterialFloatFromTo(UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector2D* AppendTweenCustomVector2D(UPARAM(Ref) UObject*& TweenTarget, FVector2D From, FVector2D To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenVector* AppendTweenCustomVector(UPARAM(Ref) UObject*& TweenTarget, FVector From, FVector To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* AppendTweenCustomFloat(UPARAM(Ref) UObject*& TweenTarget, float From, float To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    UTweenFloat* AppendTweenActorFollowSpline(UPARAM(Ref) AActor*& TweenTarget, USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
};

