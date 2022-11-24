#include "BMAnimatedStrokeDataAsset.h"

FSlateBrush UBMAnimatedStrokeDataAsset::ChooseAnimatedStrokeBrushFromWidgetSize(const FVector2D WidgetLocalSize) {
    return FSlateBrush{};
}

UBMAnimatedStrokeDataAsset::UBMAnimatedStrokeDataAsset() {
    this->SelectionStepSize = 64.00f;
    this->SelectBrushByHeight = false;
}

