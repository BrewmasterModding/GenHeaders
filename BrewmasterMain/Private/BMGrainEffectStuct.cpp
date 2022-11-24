#include "BMGrainEffectStuct.h"

FBMGrainEffectStuct::FBMGrainEffectStuct() {
    this->Property = EBMGrainEffectPropertyType::PourSize;
    this->bIsOverrideCodeProperty = false;
    this->OverrideCodePropertyValue = 0.00f;
}

