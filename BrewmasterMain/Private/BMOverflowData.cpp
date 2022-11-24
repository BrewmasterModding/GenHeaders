#include "BMOverflowData.h"

FBMOverflowData::FBMOverflowData() {
    this->TransitionToOverflowSpeed = 0.00f;
    this->OverflowLiquidLossRate = 0.00f;
    this->BlackAlphaVertices = 0;
    this->OverflowingFallSpeed = 0.00f;
    this->RemoveOverflowLiquidSpeed = 0.00f;
    this->OverflowCapPercent = 0.00f;
    this->SplashEffectParticleSystem = NULL;
    this->SplashEffectTranslucencySortPriority = 0;
    this->LiquidDiskEffectParticleSystem = NULL;
    this->LiquidDiskEffectTranslucencySortPriority = 0;
    this->LiquidDiskEffectFadeInTime = 0.00f;
    this->LiquidDiskEffectFadeOutTime = 0.00f;
    this->StartingOverflowBaseOpacity = 0.00f;
    this->OverflowBaseOpacityRampUpSpeed = 0.00f;
    this->OverflowBaseOpacityRampDownSpeed = 0.00f;
    this->OverflowBaseOpacityRampDownStartVolume = 0.00f;
    this->GrainOverflowEffectTranslucencySortPriority = 0;
    this->OverflowingGrainMainRateScaleLowerBound = 0.00f;
    this->OverflowingGrainMainRateScaleUpperBound = 0.00f;
    this->OverflowingGrainLateRateScaleLowerBound = 0.00f;
    this->OverflowingGrainLateRateScaleUpperBound = 0.00f;
    this->OverflowingGrainWetGrainBlendLowerBound = 0.00f;
    this->OverflowingGrainWetGrainBlendUpperBound = 0.00f;
    this->GrainOverflowEffectParticles = NULL;
    this->OverflowingGrainSpawnLocation = NULL;
}

