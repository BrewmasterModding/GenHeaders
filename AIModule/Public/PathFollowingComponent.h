#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AIResourceInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PathFollowingAgentInterface -FallbackName=PathFollowingAgentInterface
#include "EPathFollowingAction.h"
#include "PathFollowingComponent.generated.h"

class ANavigationData;
class UNavMovementComponent;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UPathFollowingComponent : public UActorComponent, public IAIResourceInterface, public IPathFollowingAgentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UNavMovementComponent* MovementComp;
    
    UPROPERTY(Transient)
    ANavigationData* MyNavData;
    
public:
    UPathFollowingComponent();
protected:
    UFUNCTION()
    void OnNavDataRegistered(ANavigationData* NavData);
    
public:
    UFUNCTION()
    void OnActorBump(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintPure)
    FVector GetPathDestination() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EPathFollowingAction::Type> GetPathActionType() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

