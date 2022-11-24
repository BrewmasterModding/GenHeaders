#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ETweenEaseType.h"
#include "ETweenLoopType.h"
#include "TweenLinearColorStandardFactory.generated.h"

class UWidget;
class UTweenLinearColor;
class UTweenContainer;
class UTweenManagerComponent;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType)
class TWEENMAKER_API UTweenLinearColorStandardFactory : public UObject {
    GENERATED_BODY()
public:
    UTweenLinearColorStandardFactory();
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColor* BP_JoinTweenWidgetColorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColor* BP_JoinTweenWidgetColorFromTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColor* BP_JoinTweenMaterialVectorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColor* BP_JoinTweenMaterialVectorFromTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenWidgetColorTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UTweenContainer*& TweenContainer, UTweenLinearColor*& Tween, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenWidgetColorFromTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UTweenContainer*& TweenContainer, UTweenLinearColor*& Tween, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenMaterialVectorTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, UTweenContainer*& TweenContainer, UTweenLinearColor*& Tween, FName ParameterName, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenMaterialVectorFromTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, UTweenContainer*& TweenContainer, UTweenLinearColor*& Tween, FName ParameterName, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColor* BP_AppendTweenWidgetColorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColor* BP_AppendTweenWidgetColorFromTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UWidget*& TweenTarget, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColor* BP_AppendTweenMaterialVectorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColor* BP_AppendTweenMaterialVectorFromTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32 SequenceIndex);
    
};

