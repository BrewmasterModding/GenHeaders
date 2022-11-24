#include "BMGrainShaderStuct.h"

FBMGrainShaderStuct::FBMGrainShaderStuct() {
    this->Property = EBMGrainShaderPropertyType::Volume;
    this->bIsOverrideCodeProperty = false;
    this->OverrideCodePropertyValue = 0.00f;
}

