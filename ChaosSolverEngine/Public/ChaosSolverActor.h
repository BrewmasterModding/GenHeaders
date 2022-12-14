#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=SolverBreakingFilterSettings -FallbackName=SolverBreakingFilterSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=SolverTrailingFilterSettings -FallbackName=SolverTrailingFilterSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ChaosSolverConfiguration -FallbackName=ChaosSolverConfiguration
#include "EClusterConnectionTypeEnum.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=SolverCollisionFilterSettings -FallbackName=SolverCollisionFilterSettings
#include "ChaosDebugSubstepControl.h"
#include "ChaosSolverActor.generated.h"

class UChaosGameplayEventDispatcher;
class UBillboardComponent;

UCLASS()
class CHAOSSOLVERENGINE_API AChaosSolverActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FChaosSolverConfiguration Properties;
    
    UPROPERTY()
    float TimeStepMultiplier;
    
    UPROPERTY()
    int32 CollisionIterations;
    
    UPROPERTY()
    int32 PushOutIterations;
    
    UPROPERTY()
    int32 PushOutPairIterations;
    
    UPROPERTY()
    float ClusterConnectionFactor;
    
    UPROPERTY()
    EClusterConnectionTypeEnum ClusterUnionConnectionType;
    
    UPROPERTY()
    bool DoGenerateCollisionData;
    
    UPROPERTY()
    FSolverCollisionFilterSettings CollisionFilterSettings;
    
    UPROPERTY()
    bool DoGenerateBreakingData;
    
    UPROPERTY()
    FSolverBreakingFilterSettings BreakingFilterSettings;
    
    UPROPERTY()
    bool DoGenerateTrailingData;
    
    UPROPERTY()
    FSolverTrailingFilterSettings TrailingFilterSettings;
    
    UPROPERTY()
    float MassScale;
    
    UPROPERTY()
    bool bGenerateContactGraph;
    
    UPROPERTY(EditAnywhere)
    bool bHasFloor;
    
    UPROPERTY(EditAnywhere)
    float FloorHeight;
    
    UPROPERTY(EditAnywhere)
    FChaosDebugSubstepControl ChaosDebugSubstepControl;
    
    UPROPERTY(Instanced)
    UBillboardComponent* SpriteComponent;
    
private:
    UPROPERTY(Instanced)
    UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;
    
public:
    AChaosSolverActor();
    UFUNCTION(BlueprintCallable)
    void SetSolverActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SetAsCurrentWorldSolver();
    
};

