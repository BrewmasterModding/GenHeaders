#include "BMRichText.h"

class UBMRichText;

void UBMRichText::UpdateTextSizeOverride(const float NewSize, const bool bInOverrideSize) {
}

void UBMRichText::UpdateTextColorOverride(const FSlateColor NewColor, const bool bInOverrideColor) {
}

void UBMRichText::UpdateLayout() {
}

void UBMRichText::SetUseArticleTextOnLinkedTextBoxes(TArray<UBMRichText*>& LinkedTextBoxes, bool InUsesArticleText) {
}

void UBMRichText::SetUseArticleText(bool InUsesArticleText) {
}

void UBMRichText::SetTextSizeOverride(const float NewSize) {
}

void UBMRichText::SetTextColorOverride(const FSlateColor NewColor) {
}

void UBMRichText::SetSlateLinkedTextBox(UBMRichText* InBMRichText) {
}

void UBMRichText::SetShouldFlowText(bool InFlowText) {
}

void UBMRichText::SetMyText(FText InputText, bool FitInBox) {
}

void UBMRichText::SetModifyLinkedTextBoxMarginOnOverflow(bool InAdjustMarginsAfterOverflow) {
}

void UBMRichText::SetArticleText(FText InText, bool bConvertTextToIntermediateFormat) {
}

UBMRichText* UBMRichText::GetSlateLinkedTextBox() {
    return NULL;
}

FText UBMRichText::GetRemainingText() {
    return FText::GetEmpty();
}

void UBMRichText::ConvertText() {
}

FText UBMRichText::ConvertArticleTextToIntermediateFormat(FText InText) {
    return FText::GetEmpty();
}

FText UBMRichText::ConvertArticleTextFromIntermediateToFinalFormat(FText InText) {
    return FText::GetEmpty();
}

UBMRichText::UBMRichText() : URichTextBlock(FObjectInitializer::Get()) {
    this->bCreateTooltips = false;
    this->bDontLocalizeInnerKeys = false;
    this->bTextIsArticleText = false;
    this->bShouldConvertText = false;
    this->FitText = true;
    this->bOverrideTextSize = false;
    this->TextSizeOverride = 0.00f;
    this->bOverrideTextColor = false;
    this->bEnableTextFlowing = false;
    this->SlateLinkedTextBox = NULL;
    this->OverflowTextAtLineHeightPercent = 0.00f;
    this->bModifyLinkedTextBoxMarginOnOverflow = false;
    this->PredictedLayoutScale = 0.00f;
    this->CachedLayoutScale = 0.00f;
    this->bHasTextToFlow = false;
    this->bHasFlowedText = false;
    this->TextLineEffectMode = ETextLineEffect::None;
    this->UnderlineOffsetFromBaseline = 0.00f;
}

