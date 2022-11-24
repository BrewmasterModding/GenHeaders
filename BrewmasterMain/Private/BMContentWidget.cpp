#include "BMContentWidget.h"

void UBMContentWidget::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UBMContentWidget::SetPadding(FMargin InPadding) {
}

void UBMContentWidget::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UBMContentWidget::SetDesiredSizeScale(FVector2D InScale) {
}

void UBMContentWidget::SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity) {
}

ESlateVisibility UBMContentWidget::GetShouldThisShowPlatform() {
    return ESlateVisibility::Visible;
}

ESlateVisibility UBMContentWidget::GetShouldThisShowInput() {
    return ESlateVisibility::Visible;
}

UBMContentWidget::UBMContentWidget() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->bShowEffectWhenDisabled = false;
    this->bFlipForRightToLeftFlowDirection = false;
    this->bShowOnSwitch = true;
    this->bShowOnXBox = true;
    this->bShowOnPlayStation = true;
    this->bShowOnPC = true;
    this->bShowWithController = true;
    this->bShowWithMouseAndKeyboard = true;
}

