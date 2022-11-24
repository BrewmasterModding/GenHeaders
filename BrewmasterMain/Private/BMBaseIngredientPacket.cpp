#include "BMBaseIngredientPacket.h"
#include "BMPourableComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ProceduralMeshComponent -ObjectName=ProceduralMeshComponent -FallbackName=ProceduralMeshComponent
#include "BMLidInteractionComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "BMAnalogueControlComponent.h"
#include "BMPouringMeshComponent.h"

class UBMCarryableComponent;

void ABMBaseIngredientPacket::SetIconScreenshotContentValues(float ContentsValue) {
}

UBMCarryableComponent* ABMBaseIngredientPacket::GetCarryComponent() {
    return NULL;
}

ABMBaseIngredientPacket::ABMBaseIngredientPacket() {
    this->MinimumLiquidZOffset = 0.00f;
    this->MainContainerMesh = NULL;
    this->SM_LiquidContainer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_LiquidContainer"));
    this->BaseProcMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("BaseProcMesh"));
    this->PM_Liquid = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("PM_Container"));
    this->PourComponent = CreateDefaultSubobject<UBMPourableComponent>(TEXT("PourComponent"));
    this->AnalogueControlComponent = CreateDefaultSubobject<UBMAnalogueControlComponent>(TEXT("AnalogueControlComponent"));
    this->PouringSpline = CreateDefaultSubobject<UBMPouringMeshComponent>(TEXT("PouringSpline"));
    this->GrainPouringFX = NULL;
    this->GrainPouringSystem = NULL;
    this->GrainPouringTranslucencySortPriority = 0;
    this->LidInteraction = CreateDefaultSubobject<UBMLidInteractionComponent>(TEXT("LidInteractionComponent"));
    this->BrewingShader = NULL;
    this->GrainShader = NULL;
    this->GrainEffectShader = NULL;
    this->LiquidMaterial = NULL;
    this->LiquidMaterialInstance = NULL;
    this->bAllowSwaying = true;
    this->LiquidVolumePercent = 0.00f;
    this->LowLiquidCapSections = 3;
    this->MediumLiquidCapSections = 4;
    this->HighLiquidCapSections = 5;
    this->MaxSwayCurve = NULL;
    this->SwayStiffness = 5.00f;
    this->SwayDampingFactor = 0.50f;
    this->ShouldOverwriteContentsPercent = false;
    this->OverwriteContentsPercent = 0.00f;
    this->OverwriteMaxContentsValue = 0.00f;
    this->KeepContentAtOverwriteContentsPercent = false;
    this->ShouldSpawnContentsRegardlessOfLid = false;
    this->VolumePercentWhenFilled = 0.50f;
    this->AudioAssetList = NULL;
    this->InitialImpactAudioComponent = NULL;
    this->EndingImpactAudioComponent = NULL;
    this->PouringActionAudioComponent = NULL;
    this->CurrentPourTarget = NULL;
}

