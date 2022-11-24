#include "BMFramingBoundsSphere.h"

void UBMFramingBoundsSphere::SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps) {
}

float UBMFramingBoundsSphere::GetUnscaledSphereRadius() const {
    return 0.0f;
}

float UBMFramingBoundsSphere::GetShapeScale() const {
    return 0.0f;
}

float UBMFramingBoundsSphere::GetScaledSphereRadius() const {
    return 0.0f;
}

UBMFramingBoundsSphere::UBMFramingBoundsSphere() {
    this->SphereRadius = 32.00f;
}

