#include "BMActionGlyphDecorator.h"

UBMActionGlyphDecorator::UBMActionGlyphDecorator() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->GlyphScaleMultiplier = 1.00f;
    this->ActionGlyphBP = NULL;
}

