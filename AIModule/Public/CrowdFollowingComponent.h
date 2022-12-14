#pragma once
#include "CoreMinimal.h"
#include "PathFollowingComponent.h"
#include "CrowdAgentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CrowdFollowingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UCrowdFollowingComponent : public UPathFollowingComponent, public ICrowdAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector CrowdAgentMoveDirection;
    
    UCrowdFollowingComponent();
    UFUNCTION(BlueprintCallable)
    void SuspendCrowdSteering(bool bSuspend);
    
    
    // Fix for true pure virtual functions not being implemented
};

