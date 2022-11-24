#include "BMPhotoSceneLightProperties.h"

FBMPhotoSceneLightProperties::FBMPhotoSceneLightProperties() {
    this->bCastShadows = false;
    this->bUseTemperature = false;
    this->Intensity = 0.00f;
    this->Temperature = 0.00f;
    this->AttenuationRadius = 0.00f;
    this->SourceRadius = 0.00f;
    this->SourceLength = 0.00f;
    this->InnerConeAngle = 0.00f;
    this->OuterConeAngle = 0.00f;
    this->BarnDoorAngle = 0.00f;
    this->BarnDoorLength = 0.00f;
    this->SourceWidth = 0.00f;
    this->SourceHeight = 0.00f;
    this->SourceTexture = NULL;
    this->IntensityUnit = ELightUnits::Unitless;
    this->UseLightingChannel0 = false;
    this->UseLightingChannel1 = false;
    this->UseLightingChannel2 = false;
    this->SpecularScale = 0.00f;
    this->ShadowResolutionScale = 0.00f;
    this->ShadowBias = 0.00f;
    this->ShadowSlopeBias = 0.00f;
    this->ShadowFilterSharpen = 0.00f;
    this->ContactShadowLength = 0.00f;
    this->SoftSourceRadius = 0.00f;
}

