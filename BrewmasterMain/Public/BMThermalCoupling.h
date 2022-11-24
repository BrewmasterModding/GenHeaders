#pragma once
#include "CoreMinimal.h"
#include "BMBaseEquipment.h"
#include "BMSaveableActorInterface.h"
#include "BMHeatExchangeData.h"
#include "BMThermalCoupling.generated.h"

class UChildActorComponent;
class USkeletalMeshComponent;
class ABMBaseTap;
class ABMDynamicContainer;

UCLASS()
class BREWMASTERMAIN_API ABMThermalCoupling : public ABMBaseEquipment, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UChildActorComponent* Inflow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UChildActorComponent* Outflow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UChildActorComponent* SecondInflow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UChildActorComponent* SecondOutflow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* ThermalCouplingMesh;
    
    UPROPERTY()
    ABMBaseTap* InflowTap;
    
    UPROPERTY()
    ABMBaseTap* OutflowTap;
    
    UPROPERTY()
    ABMBaseTap* SecondInflowTap;
    
    UPROPERTY()
    ABMBaseTap* SecondOutflowTap;
    
    UPROPERTY()
    ABMDynamicContainer* Container;
    
    UPROPERTY(EditAnywhere)
    float LiquidTransferTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FBMHeatExchangeData HeatExchangeData;
    
    ABMThermalCoupling();
    UFUNCTION()
    FBMHeatExchangeData GetHeatExchData();
    
    
    // Fix for true pure virtual functions not being implemented
};

