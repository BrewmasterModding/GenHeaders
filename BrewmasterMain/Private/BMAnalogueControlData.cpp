#include "BMAnalogueControlData.h"

FBMAnalogueControlData::FBMAnalogueControlData() {
    this->AnimationSeconds = 0.00f;
    this->VariableAnimationSecondsCurve = NULL;
    this->CurveXAxisIsDistanceFromTarget = false;
    this->ZOffsetForPouringPosition = 0.00f;
    this->AnimatingComponent = NULL;
    this->PivotComp = NULL;
}

