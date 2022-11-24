#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ETweenGenericType.h"
#include "ETweenLoopType.h"
#include "TweenManagerActor.generated.h"

class UObject;
class UBaseTween;
class UTweenContainer;

UCLASS()
class TWEENMAKER_API ATweenManagerActor : public AActor {
    GENERATED_BODY()
public:
    ATweenManagerActor();
    UFUNCTION(BlueprintCallable)
    static bool IsObjectTweening(UPARAM(Ref) UObject*& TweenTarget, ETweenGenericType TweensType, UBaseTween*& TweenFound);
    
    UFUNCTION(BlueprintCallable)
    static bool FindTweenByName(FName TweenName, ETweenGenericType TweenType, UBaseTween*& TweenFound);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteAllTweensByObject(UPARAM(Ref) UObject*& TweenTarget, ETweenGenericType TweensType);
    
    UFUNCTION(BlueprintCallable)
    static int32 DeleteAllTweens();
    
    UFUNCTION(BlueprintCallable)
    static void BP_CreateTweenContainerStatic(UTweenContainer*& TweenContainer, int32 NumLoops, ETweenLoopType LoopType, float TimeScale);
    
};

