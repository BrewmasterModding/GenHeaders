#include "BMCO2Tank.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "BMSetCarbonationInteractionComp.h"
#include "BMAnalogueControlComponent.h"

void ABMCO2Tank::UpdateCarbonationAudio() {
}

void ABMCO2Tank::SetTargetCarbonation(float TargetCarbonation) {
}

FBMCO2Data ABMCO2Tank::GetCO2Data() {
    return FBMCO2Data{};
}

ABMCO2Tank::ABMCO2Tank() {
    this->CO2Tank = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CO2Tank"));
    this->Regulator = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("C02Regulator"));
    this->RegulatorSwitch = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("C02TankRegulator_Switch"));
    this->RegulatorNeedleLeft = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("C02Tank_Regulator_Needle_Left"));
    this->RegulatorNeedleTop = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("C02Tank_Regulator_Needle_Top"));
    this->Handle = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("C02Tank_Handle"));
    this->CarbonationInteractionComponent = CreateDefaultSubobject<UBMSetCarbonationInteractionComp>(TEXT("CarbonationInteractionComponent"));
    this->AnalogueControlComponent = CreateDefaultSubobject<UBMAnalogueControlComponent>(TEXT("AnalogueControlComponent"));
    this->NeedleLeftAnimation = NULL;
    this->NeedleTopAnimation = NULL;
    this->HandleAnimation = NULL;
    this->HandleAnimationOff = NULL;
    this->RegulatorSwitchAnimation = NULL;
    this->CurrentCarbonationNeedlePositionMultiplier = 1.00f;
    this->ZeroAdjustment = 20.00f;
    this->GasAudioComponent = NULL;
    this->AudioAssetList = NULL;
}

