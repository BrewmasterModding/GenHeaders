#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ETweenGenericType.h"
#include "ETweenLoopType.h"
#include "TweenManagerComponent.generated.h"

class UTweenContainer;
class UBaseTween;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWEENMAKER_API UTweenManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UTweenContainer*> mTweenContainers;
    
public:
    UTweenManagerComponent();
private:
    UFUNCTION()
    void UpdateNameMap(UBaseTween* pTween, const FName& pPreviousName, const FName& pNewName);
    
    UFUNCTION()
    void TweenDestroyed(UBaseTween* pTween);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsObjectTweening(UPARAM(Ref) UObject*& TweenTarget, ETweenGenericType TweensType, UBaseTween*& TweenFound) const;
    
    UFUNCTION(BlueprintPure)
    bool FindTweenByName(FName TweenName, ETweenGenericType TweenType, UBaseTween*& TweenFound) const;
    
    UFUNCTION(BlueprintCallable)
    bool DeleteAllTweensByObject(UPARAM(Ref) UObject*& TweenTarget, ETweenGenericType TweensType);
    
    UFUNCTION(BlueprintCallable)
    int32 DeleteAllTweens();
    
    UFUNCTION(BlueprintCallable)
    void BP_CreateTweenContainer(UTweenContainer*& TweenContainer, int32 NumLoops, ETweenLoopType LoopType, float TimeScale);
    
};

