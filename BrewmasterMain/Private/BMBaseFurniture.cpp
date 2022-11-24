#include "BMBaseFurniture.h"
#include "BMBuildModeComponent.h"



FBMFurnitureData ABMBaseFurniture::GetFurnitureData() {
    return FBMFurnitureData{};
}

FBoxSphereBounds ABMBaseFurniture::BMGetLocalBounds() {
    return FBoxSphereBounds{};
}

ABMBaseFurniture::ABMBaseFurniture() {
    this->bDebugCorners = false;
    this->BuildModeComponent = CreateDefaultSubobject<UBMBuildModeComponent>(TEXT("BuildModeComponent"));
    this->bShouldOffsetViewAngle = false;
}

