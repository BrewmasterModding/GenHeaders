#pragma once
#include "CoreMinimal.h"
#include "BaseTween.h"
#include "BP_OnTweenFloatChangeDelegate.h"
#include "BP_OnTweenActorHitFloatDelegate.h"
#include "BP_OnTweenActorBeginOverlapFloatDelegate.h"
#include "BP_OnTweenPrimitiveComponentHitFloatDelegate.h"
#include "BP_OnTweenPrimitiveComponentBeginOverlapFloatDelegate.h"
#include "BP_OnTweenSplinePointReachedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "TweenFloat.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS()
class TWEENMAKER_API UTweenFloat : public UBaseTween {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenFloatChange OnTweenStart;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenFloatChange OnTweenUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenFloatChange OnTweenEnd;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenActorHitFloat OnTweenActorHit;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenActorBeginOverlapFloat OnTweenActorBeginOverlap;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenPrimitiveComponentHitFloat OnTweenPrimitiveComponentHit;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenPrimitiveComponentBeginOverlapFloat OnTweenPrimitiveComponentBeginOverlap;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenSplinePointReached OnTweenSplinePointReached;
    
    UTweenFloat();
private:
    UFUNCTION()
    void OnPrimitiveComponentHit(UPrimitiveComponent* pThisComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector pNormalImpulse, const FHitResult& pHitResult);
    
    UFUNCTION()
    void OnPrimitiveComponentBeginOverlap(UPrimitiveComponent* pThisComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 pOtherBodyIndex, bool bFromSweep, const FHitResult& pSweepResult);
    
    UFUNCTION()
    void OnActorHit(AActor* pThisActor, AActor* pOtherActor, FVector pNormalImpulse, const FHitResult& pHit);
    
    UFUNCTION()
    void OnActorBeginOverlap(AActor* pThisActor, AActor* pOtherActor);
    
public:
    UFUNCTION(BlueprintPure)
    float GetCurrentValue() const;
    
};

