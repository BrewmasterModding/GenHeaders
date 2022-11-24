#include "BMPouringMeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

void UBMPouringMeshComponent::SetUpPuddle(FBMLiquidPuddleEffect LostLiquidPuddleEffect) {
}

void UBMPouringMeshComponent::SetDebugDisablePouring(bool Value) {
}

void UBMPouringMeshComponent::ScalePuddle(FBMLiquidPuddleEffect LostLiquidPuddleEffect) {
}

void UBMPouringMeshComponent::FadeInPuddle(FBMLiquidPuddleEffect LostLiquidPuddleEffect) {
}

void UBMPouringMeshComponent::DestroyPuddleNow() {
}

void UBMPouringMeshComponent::DestroyPuddle(FBMLiquidPuddleEffect LostLiquidPuddleEffect) {
}

void UBMPouringMeshComponent::DelayDestroyPuddle(FBMLiquidPuddleEffect LostLiquidPuddleEffect) {
}

UBMPouringMeshComponent::UBMPouringMeshComponent() {
    this->PourAreaRoot = 2.00f;
    this->PourVelocityMultiplier = 5.00f;
    this->PourVelocityMultiplierByPourArea = NULL;
    this->PourVelocityMultiplierByLiquidVolumePercent = NULL;
    this->PourGravityCurve = NULL;
    this->PourTransitionCurve = NULL;
    this->PourNormalCurve = NULL;
    this->ZDirectionPerfectCylinder = -0.75f;
    this->PouringHeightPercentForPerfectCylinderRadius = 0.20f;
    this->PouringHeightPercentForEndingCylinderRadius = 0.04f;
    this->UsePouringWidthForPouringCylinderCalculations = false;
    this->FlatPourCylinder = false;
    this->FlattenPerfectCylinderRadiusPercent = 0.50f;
    this->FlattenEndingCylinderRadiusPercent = 0.50f;
    this->LowPouringSimSectionFrequency = 50;
    this->MediumPouringSimSectionFrequency = 100;
    this->HighPouringSimSectionFrequency = 150;
    this->PouringSimMaxTime = 3.00f;
    this->LiquidHardSurfaceSplash = NULL;
    this->LiquidOnLiquidSplash = NULL;
    this->LiquidPhysicalMaterial = NULL;
    this->MaxProjectileAttempts = 200;
    this->AudioAssetList = NULL;
    this->PourTarget = NULL;
    this->PouringSpline = CreateDefaultSubobject<USplineComponent>(TEXT("Default__BMPouringMeshComponent"));
    this->PushUpBlueVertexColor = 10.00f;
    this->GradientStartBlueVertexColor = 0.00f;
    this->PourFallRate = 50.00f;
    this->PourFallRateCurve = NULL;
    this->bDebugPouring = false;
    this->PercentChangeForVelocityAdjustments = 0.01f;
    this->SmallPercentChangeForVelocityAdjustments = 0.00f;
    this->SplashFX = NULL;
    this->PouringPointDetectionTolerance = 0.00f;
    this->PouringPointMinimumDistance = 0.00f;
    this->TextureRotationCurve = NULL;
}

