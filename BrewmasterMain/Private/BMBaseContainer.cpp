#include "BMBaseContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "BMObjectTransfer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "BMPourableComponent.h"
#include "BMCarryableComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ProceduralMeshComponent -ObjectName=ProceduralMeshComponent -FallbackName=ProceduralMeshComponent
#include "BMAnalogueControlComponent.h"
#include "BMPouringMeshComponent.h"

class USplineComponent;

float ABMBaseContainer::GetRadius() {
    return 0.0f;
}

USkeletalMeshComponent* ABMBaseContainer::GetMainContainerMesh() {
    return NULL;
}

float ABMBaseContainer::GetHeight() {
    return 0.0f;
}

USplineComponent* ABMBaseContainer::GetConenctionSpline() {
    return NULL;
}

ABMBaseContainer::ABMBaseContainer() {
    this->MainContainerMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MainContainerMesh"));
    this->SM_LiquidContainer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_LiquidContainer"));
    this->SM_LiquidOverflowContainer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_LiquidOverflowContainer"));
    this->SM_Overflowing_SupportMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Overflowing_SupportMesh"));
    this->BaseProcMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("BaseProcMesh"));
    this->BaseOverflowProcMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("BaseOverflowProcMesh"));
    this->PM_Liquid = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("PM_Container"));
    this->PM_Grain = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("PM_Grain"));
    this->ObjectTransferComponent = CreateDefaultSubobject<UBMObjectTransfer>(TEXT("ObjectTransferComponent"));
    this->CarryComponent = CreateDefaultSubobject<UBMCarryableComponent>(TEXT("CarryComponent"));
    this->PourComponent = CreateDefaultSubobject<UBMPourableComponent>(TEXT("PourComponent"));
    this->AnalogueControlComponent = CreateDefaultSubobject<UBMAnalogueControlComponent>(TEXT("AnalogueControlComponent"));
    this->PouringSpline = CreateDefaultSubobject<UBMPouringMeshComponent>(TEXT("PouringSpline"));
    this->GrainPouringSpline = CreateDefaultSubobject<UBMPouringMeshComponent>(TEXT("GrainPouringSpline"));
    this->LaceMeshInner = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InsideLaceMesh"));
    this->LaceMeshOuter = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OutsideLaceMesh"));
    this->LiquidMaterial = NULL;
    this->LiquidMaterial_DefaultLit = NULL;
    this->GrainMaterial = NULL;
    this->OverflowMaterial = NULL;
    this->OverflowMaterial_DefaultLit = NULL;
    this->LaceMaterial = NULL;
    this->LiquidMaterialInstance = NULL;
    this->GrainMaterialInstance = NULL;
    this->OverflowMaterialInstance = NULL;
    this->DynamicLaceMaterial = NULL;
    this->DynamicOuterLaceMaterial = NULL;
    this->WaterLevelMaterial = NULL;
    this->WaterLevelDynamicMaterial = NULL;
    this->WaterLevelMaterialSlot = 0;
    this->ContainerSize = ESizeBand::NONE;
    this->ContainerLipSpline = NULL;
    this->GrainPouringFX = NULL;
    this->GrainPouringSystem = NULL;
    this->GrainPouringTranslucencySortPriority = 0;
    this->Radius = 0.00f;
    this->HeightOriginToLiquidTop = 0.00f;
}

