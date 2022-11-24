#pragma once
#include "CoreMinimal.h"
#include "ETweenGenericType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BP_OnTweenContainerEndDelegate.h"
#include "ETweenLoopType.h"
#include "ParallelTween.h"
#include "TweenContainer.generated.h"

class UTweenManagerComponent;
class UBaseTween;

UCLASS(BlueprintType)
class TWEENMAKER_API UTweenContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UTweenManagerComponent* OwningTweenManager;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenContainerEnd OnTweenContainerEnd;
    
private:
    UPROPERTY()
    TArray<FParallelTween> mSequences;
    
public:
    UTweenContainer();
    UFUNCTION(BlueprintCallable)
    void TogglePauseTweenContainer();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeScale(float NewTimeScale);
    
    UFUNCTION(BlueprintCallable)
    void SetPersistent(bool Persistent);
    
    UFUNCTION(BlueprintCallable)
    void SetLoop(int32 NumLoops, ETweenLoopType LoopType);
    
    UFUNCTION(BlueprintCallable)
    void ResumeTweenContainer();
    
    UFUNCTION(BlueprintCallable)
    void RestartTweenContainer();
    
    UFUNCTION(BlueprintCallable)
    void PauseTweenContainer();
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintPure)
    bool IsObjectTweeningInContainer(UPARAM(Ref) UObject*& TweenTarget, ETweenGenericType TweensType, UBaseTween*& TweenFound) const;
    
    UFUNCTION(BlueprintPure)
    bool HasEnded() const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteTweensInContainerByObject(UPARAM(Ref) UObject*& TweenTarget, ETweenGenericType TweensType);
    
    UFUNCTION(BlueprintCallable)
    void DeleteTweenContainer(bool pCompleteAllTweensPriorToDeletion);
    
};

