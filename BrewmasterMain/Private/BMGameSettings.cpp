#include "BMGameSettings.h"

class UBMGameInstance;
class UObject;

void UBMGameSettings::UsedCachedAudioVolumeMusic() {
}

void UBMGameSettings::SetVerticalInverted(bool Inverted) {
}

void UBMGameSettings::SetUIScale(float Value) {
}

void UBMGameSettings::SetToolTipDelay(float Value) {
}

void UBMGameSettings::SetToKeyboardMouseDefaults() {
}

void UBMGameSettings::SetToGraphicsDefaults() {
}

void UBMGameSettings::SetToGeneralDefaults() {
}

void UBMGameSettings::SetToDisplayDefaults() {
}

void UBMGameSettings::SetToControllerDefaults() {
}

void UBMGameSettings::SetToAudioDefaults() {
}

void UBMGameSettings::SetToAccessibilityDefaults() {
}

void UBMGameSettings::SetSwapAnalogueStickMovement(bool Value) {
}

void UBMGameSettings::SetSkipTutorial(bool Value) {
}

void UBMGameSettings::SetScrollSpeedMouse(float Value) {
}

void UBMGameSettings::SetScrollingStopWatchSensitivity(float Value) {
}

void UBMGameSettings::SetScrollingRotationSensitivity(float Value) {
}

void UBMGameSettings::SetScrollingPourSensitivity(float Value) {
}

void UBMGameSettings::SetScrollingGeneralSensitivity(float Value) {
}

void UBMGameSettings::SetSafeScale(float Value, bool MarkGraphicsChanged) {
}

void UBMGameSettings::SetPouringGraphicsInt(int32 Value) {
}

void UBMGameSettings::SetHorizontalInverted(bool Inverted) {
}

void UBMGameSettings::SetHardwareMouse(bool bHardwareMouse) {
}

void UBMGameSettings::SetGamepadCursorSensitivityOnHover(float Value) {
}

void UBMGameSettings::SetGamepadCursorSensitivity(float Value) {
}

void UBMGameSettings::SetGamepadAimSensitivity(float Value) {
}

void UBMGameSettings::SetGameInstance(UBMGameInstance* Instance) {
}

void UBMGameSettings::SetFullscreenResolutionInt(int32 Value) {
}

void UBMGameSettings::SetFullScreenModeInt(int32 Value) {
}

void UBMGameSettings::SetCurrentMonitor(int32 MonitorNumber) {
}

void UBMGameSettings::SetCurrentCultureIndex(int32 Index) {
}

void UBMGameSettings::SetCurrentCulture(const FString& Culture) {
}

void UBMGameSettings::SetContextualTipsOptions(int32 Value) {
}

void UBMGameSettings::SetbMotionBlurOn(bool bOn) {
}

void UBMGameSettings::SetAudioVolumeUISFX(float Volume) {
}

void UBMGameSettings::SetAudioVolumeSFX(float Volume) {
}

void UBMGameSettings::SetAudioVolumeMusic(float Volume) {
}

void UBMGameSettings::SetAudioVolumeMaster(float Volume) {
}

void UBMGameSettings::SetAudioVolumeAmbience(float Volume) {
}

void UBMGameSettings::SetAimSensitivity(float Value) {
}

void UBMGameSettings::SetAdvancedContextualTipsOnly(bool Value) {
}

int32 UBMGameSettings::GetPouringGraphicsInt() {
    return 0;
}

int32 UBMGameSettings::GetNumberOfMonitors() {
    return 0;
}

int32 UBMGameSettings::GetNumberOfCultures(UObject* Context) {
    return 0;
}

int32 UBMGameSettings::GetFullScreenResolutionOptionNum() {
    return 0;
}

int32 UBMGameSettings::GetFullScreenResolutionInt() {
    return 0;
}

int32 UBMGameSettings::GetCurrentRefreshRate() const {
    return 0;
}

int32 UBMGameSettings::GetCurrentDisplayMontitor() {
    return 0;
}

int32 UBMGameSettings::GetCurrentCultureIndex(UObject* Context) {
    return 0;
}

int32 UBMGameSettings::GetCurrentContextualTipsOption() {
    return 0;
}

void UBMGameSettings::CacheAudioVolumeMusic() {
}

void UBMGameSettings::ApplyMonitorSetting() {
}

void UBMGameSettings::ApplyBMSettings() {
}

void UBMGameSettings::ApplyAudioVolumes() {
}

UBMGameSettings::UBMGameSettings() {
    this->GameInstance = NULL;
    this->TestSetting = false;
    this->UseMetric = true;
    this->AudioVolumeMaster = 1.00f;
    this->AudioVolumeMusic = 1.00f;
    this->CachedAudioVolumeMusic = 1.00f;
    this->AudioVolumeSFX = 1.00f;
    this->AudioVolumeAmbience = 1.00f;
    this->AudioVolumeUISFX = 1.00f;
    this->FullScreenModeInt = 0;
    this->XResolution = 1920.00f;
    this->YResolution = 1080.00f;
    this->PreviousXResolution = 0.00f;
    this->PreviousYResolution = 0.00f;
    this->PreviousFullScreenModeInt = 0;
    this->PreviousVSync = false;
    this->PreviousDisplayMonitor = 0;
    this->ScrollingPourSensitivity = 2.00f;
    this->ScrollingRotationSensitivity = 2.50f;
    this->ScrollingStopWatchSensitivity = 0.50f;
    this->ScrollingGeneralSensitivity = 0.50f;
    this->CurrentCulture = TEXT("en");
    this->ToolTipDelay = 0.00f;
    this->DisplayMonitor = 0;
    this->PreviousUIScale = 100.00f;
    this->UIScale = 100.00f;
    this->GraphicsQuality = 1;
    this->MotionBlur = true;
    this->DefaultMotionBlurAmount = 0.25f;
    this->DefaultAntiAliasing = 2;
    this->AimSensitivity = 1.00f;
    this->GamepadAimSensitivity = 3.00f;
    this->GamepadCursorSensitivity = 1.00f;
    this->GamepadCursorSensitivityOnHover = 0.30f;
    this->SwapAnalogueStickMovement = false;
    this->InvertedY = false;
    this->InvertedX = false;
    this->bUseHardwareCursor = true;
    this->MouseScrollSpeed = 1.00f;
    this->AdvancedContextualTipsOnly = false;
    this->ContextualTipsOptions = 2;
    this->NextFestLanguages.AddDefaulted(2);
    this->SkipTutorial = false;
    this->PouringGraphics = 2;
    this->SafeAreaScale = 1.00f;
    this->FirstTimeBoot = false;
    this->bOverrideSwitchShadersToDefaultLit = false;
    this->bDoOnceSetAllTips = false;
}

