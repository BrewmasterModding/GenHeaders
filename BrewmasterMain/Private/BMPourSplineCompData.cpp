#include "BMPourSplineCompData.h"

FBMPourSplineCompData::FBMPourSplineCompData() {
    this->PourAreaRoot = 0.00f;
    this->PourVelocityMultiplier = 0.00f;
    this->PourVelocityMultiplierByPourArea = NULL;
    this->PourVelocityMultiplierByLiquidVolumePercent = NULL;
    this->PourGravityCurve = NULL;
    this->PourTransitionCurve = NULL;
    this->ZDirectionPerfectCylinder = 0.00f;
    this->PouringHeightPercentForPerfectCylinderRadius = 0.00f;
    this->PouringHeightPercentForEndingCylinderRadius = 0.00f;
    this->UsePouringWidthForPouringCylinderCalculations = false;
    this->FlatPourCylinder = false;
    this->FlattenPerfectCylinderRadiusPercent = 0.00f;
    this->FlattenEndingCylinderRadiusPercent = 0.00f;
    this->LowPouringSimSectionFrequency = 0;
    this->MediumPouringSimSectionFrequency = 0;
    this->HighPouringSimSectionFrequency = 0;
    this->PouringSimMaxTime = 0.00f;
    this->LiquidHardSurfaceSplash = NULL;
    this->LiquidOnLiquidSplash = NULL;
    this->LiquidPhysicalMaterial = NULL;
    this->MaxProjectileAttempts = 0;
    this->PushUpBlueVertexColor = 0.00f;
    this->GradientStartBlueVertexColor = 0.00f;
    this->PourFallRate = 0.00f;
    this->PourFallRateCurve = NULL;
    this->bDebugPouring = false;
    this->PercentChangeForVelocityAdjustments = 0.00f;
    this->SmallPercentChangeForVelocityAdjustments = 0.00f;
    this->PouringPointDetectionTolerance = 0.00f;
    this->PouringPointMinimumDistance = 0.00f;
    this->TextureRotationCurve = NULL;
}

