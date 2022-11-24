#include "BMBaseMeasurementDevice.h"
#include "BMPlayerAttachmentComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "BMObjectTransfer.h"
#include "BMCarryableComponent.h"

class ABMDynamicContainer;

void ABMBaseMeasurementDevice::UpdateVisuals_Implementation() {
}

void ABMBaseMeasurementDevice::UpdateInteractionCollisionPosition() {
}

void ABMBaseMeasurementDevice::SetExtraInteractionCollisonEnabled(bool bNewState) {
}

void ABMBaseMeasurementDevice::GetMeasurementUpdate() {
}

ABMDynamicContainer* ABMBaseMeasurementDevice::GetMeasuredContainer() {
    return NULL;
}


void ABMBaseMeasurementDevice::CompleteMovement() {
}

ABMBaseMeasurementDevice::ABMBaseMeasurementDevice() {
    this->MeasureDeviceSKMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeasureDeviceSKMesh"));
    this->DialNeedle = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SK_ThermometerDial"));
    this->NeedleAnimation = NULL;
    this->AttachmentComponent = CreateDefaultSubobject<UBMPlayerAttachmentComponent>(TEXT("AttachmentComponent"));
    this->ObjectTransferComponent = CreateDefaultSubobject<UBMObjectTransfer>(TEXT("ObjectTransferComponent"));
    this->CarryComponent = CreateDefaultSubobject<UBMCarryableComponent>(TEXT("CarryComponent"));
    this->IsAScale = false;
    this->IsTemperatureMountedDial = false;
    this->LiquidStatMeasurement = EBMLiquidStatType::NONE;
    this->BeerStatMeasurement = EBMBeerStatType::NONE;
    this->NeedleZeroAdjustment = 0.00f;
    this->NeedlePositionMultiplier = 1.00f;
    this->NeedleMaxValue = 100.00f;
    this->NeedleMinValue = 0.00f;
    this->CurrentMeasuredContainer = NULL;
    this->MeasurementValue = 0.00f;
    this->LCDWidget = NULL;
    this->bIsPlaceInType = false;
}

