#include "BMStirringShaderStuct.h"

FBMStirringShaderStuct::FBMStirringShaderStuct() {
    this->Property = EBMStirringShaderPropertyType::GrainColour;
    this->bIsOverrideCodeProperty = false;
    this->OverrideCodePropertyValue = 0.00f;
}

