#include "BMThermalCoupling.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

FBMHeatExchangeData ABMThermalCoupling::GetHeatExchData() {
    return FBMHeatExchangeData{};
}

ABMThermalCoupling::ABMThermalCoupling() {
    this->Inflow = CreateDefaultSubobject<UChildActorComponent>(TEXT("InflowTap"));
    this->Outflow = CreateDefaultSubobject<UChildActorComponent>(TEXT("OutflowTap"));
    this->SecondInflow = CreateDefaultSubobject<UChildActorComponent>(TEXT("SecondInflowTap"));
    this->SecondOutflow = CreateDefaultSubobject<UChildActorComponent>(TEXT("SecondOutflowTap"));
    this->ThermalCouplingMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ThermalCouplingMesh"));
    this->InflowTap = NULL;
    this->OutflowTap = NULL;
    this->SecondInflowTap = NULL;
    this->SecondOutflowTap = NULL;
    this->Container = NULL;
    this->LiquidTransferTime = 0.00f;
}

