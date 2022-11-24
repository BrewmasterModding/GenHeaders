#include "BMLiquidPuddleEffect.h"

FBMLiquidPuddleEffect::FBMLiquidPuddleEffect() {
    this->LostLiquidPuddleMesh = NULL;
    this->PuddleMaterial = NULL;
    this->PuddleMaterial_DefaultLit = NULL;
    this->PuddleMaterialInstance = NULL;
    this->SpawnTime = 0.00f;
    this->FadeInTime = 0.00f;
    this->FadeInFrames = 0;
    this->GracePeriodTime = 0.00f;
    this->SmallMovementGracePeriodTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->FadeOutFrames = 0;
    this->MaxScaleTime = 0.00f;
    this->MaxScaleFrames = 0;
    this->ScaleCurve = NULL;
}

