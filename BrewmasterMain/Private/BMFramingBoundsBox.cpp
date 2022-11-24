#include "BMFramingBoundsBox.h"

void UBMFramingBoundsBox::SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps) {
}

FVector UBMFramingBoundsBox::GetUnscaledBoxExtent() const {
    return FVector{};
}

FVector UBMFramingBoundsBox::GetScaledBoxExtent() const {
    return FVector{};
}

UBMFramingBoundsBox::UBMFramingBoundsBox() {
    this->LineThickness = 0.00f;
}

