#include "BMBaseHeatExchanger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

class UTweenFloat;

void ABMBaseHeatExchanger::UpdateIncreaseButtonMorph(UTweenFloat* MorphTween) {
}

void ABMBaseHeatExchanger::UpdateHeatExchangerActiveAudio(const float TempFractValue) {
}

void ABMBaseHeatExchanger::UpdateDecreaseButtonMorph(UTweenFloat* MorphTween) {
}

void ABMBaseHeatExchanger::UpdateCurrentTemperatureVisuals() {
}

void ABMBaseHeatExchanger::SetupUpdatesBinding() {
}

void ABMBaseHeatExchanger::SetTargetTemperature(float inTemperature) {
}

void ABMBaseHeatExchanger::OnButtonPress(bool bIsIncrease) {
}

void ABMBaseHeatExchanger::OnBrewSimUpdated() {
}

bool ABMBaseHeatExchanger::IsActive() {
    return false;
}

FBMHeatExchangeData ABMBaseHeatExchanger::GetHeatExchData() {
    return FBMHeatExchangeData{};
}



ABMBaseHeatExchanger::ABMBaseHeatExchanger() {
    this->PlaceOnHeaterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PlaceOnHeaterMesh"));
    this->Animation = NULL;
    this->GlowMaterial = NULL;
    this->MaterialIndexSlot = 0;
    this->bHeatDataSaved = false;
    this->AudioAssetList = NULL;
    this->GasAudioComponent = NULL;
    this->LiquidHeatingElementAudioComponent = NULL;
    this->DynamicGlowMaterial = NULL;
    this->DynamicHeatingLightMaterial = NULL;
    this->DynamicCoolingLightMaterial = NULL;
    this->bHasLCD = false;
    this->LCDWidget = NULL;
    this->RelevantContainer = NULL;
    this->bHasHeatingCoolingLights = false;
    this->bIsHeating = false;
    this->bHeatingLightOn = false;
    this->bIsCooling = false;
    this->bCoolingLightOn = false;
    this->bHasPhysicalButtons = false;
    this->IncreaseButtonTweenContainer = NULL;
    this->DecreaseButtonTweenContainer = NULL;
    this->IncreaseButtonCurrentMorph = 0.00f;
    this->DecreaseButtonCurrentMorph = 0.00f;
}

