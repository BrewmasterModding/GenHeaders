#include "BMAnimatedStroke.h"

void UBMAnimatedStroke::ResetAnimatedStroke() {
}

void UBMAnimatedStroke::PlayAnimatedStroke() {
}




UBMAnimatedStroke::UBMAnimatedStroke() {
    this->StrokeDelayInTime = 0.01f;
    this->StrokeAnimTime = 0.25f;
    this->AnimatedStrokeBrushesData = NULL;
    this->ActiveTweenContainer = NULL;
}

