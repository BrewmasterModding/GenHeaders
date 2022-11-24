#include "BMInputManager.h"

UBMInputManager::UBMInputManager() {
    this->LongPressTime = 0.75f;
    this->HoldEarlyReleaseTime = 0.30f;
    this->GlyphDataKeyboardAndMouse.AddDefaulted(136);
    this->GlyphDataXbox.AddDefaulted(18);
    this->GlyphDataPlaystation.AddDefaulted(22);
    this->GlyphDataSwitch.AddDefaulted(18);
    this->NumberOfActionEnums = 64;
    this->CurrentPlatformEnum = EBMPlatformEnum::Unknown;
    this->DefaultMappings.AddDefaulted(212);
    this->Mappings.AddDefaulted(212);
}

