#include "AxisPositionGizmo.h"

UAxisPositionGizmo::UAxisPositionGizmo() {
    this->bEnableSignedAxis = false;
    this->BinInteraction = false;
    this->InteractionStartParameter = 0.00f;
    this->InteractionCurParameter = 0.00f;
    this->ParameterSign = 1.00f;
}

