#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "BP_OnTweenLinearColorChangeDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ETweenEaseType.h"
#include "ETweenLoopType.h"
#include "TweenLinearColorLatentFactory.generated.h"

class UWidget;
class UTweenLinearColorLatentFactory;
class UTweenContainer;
class UTweenLinearColor;
class UMaterialInstanceDynamic;
class UTweenManagerComponent;

UCLASS()
class TWEENMAKER_API UTweenLinearColorLatentFactory : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenLinearColorChange OnTweenStart;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenLinearColorChange OnTweenUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenLinearColorChange OnTweenEnd;
    
    UTweenLinearColorLatentFactory();
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColorLatentFactory* BP_JoinLatentTweenWidgetColorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenLinearColor*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColorLatentFactory* BP_JoinLatentTweenWidgetColorFromTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenLinearColor*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColorLatentFactory* BP_JoinLatentTweenMaterialVectorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenLinearColor*& OutTween, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColorLatentFactory* BP_JoinLatentTweenMaterialVectorFromTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenLinearColor*& OutTween, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColorLatentFactory* BP_CreateLatentTweenWidgetColorTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenLinearColor*& OutTween, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColorLatentFactory* BP_CreateLatentTweenWidgetColorFromTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UWidget*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenLinearColor*& OutTween, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColorLatentFactory* BP_CreateLatentTweenMaterialVectorTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenLinearColor*& OutTween, FName ParameterName, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColorLatentFactory* BP_CreateLatentTweenMaterialVectorFromTo(UTweenManagerComponent* TweenManager, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, UPARAM(Ref) UTweenContainer*& OutTweenContainer, UPARAM(Ref) UTweenLinearColor*& OutTween, FName ParameterName, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColorLatentFactory* BP_AppendLatentTweenWidgetColorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenLinearColor*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColorLatentFactory* BP_AppendLatentTweenWidgetColorFromTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenLinearColor*& OutTween, UPARAM(Ref) UWidget*& TweenTarget, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColorLatentFactory* BP_AppendLatentTweenMaterialVectorTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenLinearColor*& OutTween, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static UTweenLinearColorLatentFactory* BP_AppendLatentTweenMaterialVectorFromTo(UPARAM(Ref) UTweenContainer*& TweenContainer, UPARAM(Ref) UTweenLinearColor*& OutTween, UPARAM(Ref) UMaterialInstanceDynamic*& TweenTarget, FName ParameterName, FLinearColor From, FLinearColor To, float Duration, ETweenEaseType EaseType, int32 NumLoops, ETweenLoopType LoopType, float Delay, float TimeScale, bool TweenWhileGameIsPaused);
    
};

