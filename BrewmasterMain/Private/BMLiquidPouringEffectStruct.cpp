#include "BMLiquidPouringEffectStruct.h"

FBMLiquidPouringEffectStruct::FBMLiquidPouringEffectStruct() {
    this->Property = EBMLiquidPouringEffectPropertyType::PourSize;
    this->bIsOverrideCodeProperty = false;
    this->OverrideCodePropertyValue = 0.00f;
}

