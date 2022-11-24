#include "BMBrewingShaderStuct.h"

FBMBrewingShaderStuct::FBMBrewingShaderStuct() {
    this->Property = EBMBrewingShaderPropertyType::Volume;
    this->bIsOverrideCodeProperty = false;
    this->OverrideCodePropertyValue = 0.00f;
}

