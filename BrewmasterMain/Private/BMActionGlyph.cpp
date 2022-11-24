#include "BMActionGlyph.h"

void UBMActionGlyph::UpdateIcon(bool IsGamepad) {
}

void UBMActionGlyph::SetShowUnboundActionGlyph(bool InShouldShowIfUnbound) {
}






FSlateBrush UBMActionGlyph::GetUnboundErrorGlyph() {
    return FSlateBrush{};
}


bool UBMActionGlyph::GetShowUnboundActionGlyph() {
    return false;
}




UBMActionGlyph::UBMActionGlyph() {
    this->bIsInlinedAsDecoratorWidget = false;
    this->bShowGlyphIfUnbound = false;
}

