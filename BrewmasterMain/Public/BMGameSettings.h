#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameUserSettings -FallbackName=GameUserSettings
#include "ONUIPaddingChangedDelegate.h"
#include "OnSettingsChangedDelegate.h"
#include "BMGameSettings.generated.h"

class UBMGameInstance;
class UObject;

UCLASS(Config=BMGameSettings)
class BREWMASTERMAIN_API UBMGameSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    FONUIPaddingChanged SafeZoneChanged;
    
    UPROPERTY()
    UBMGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool TestSetting;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool UseMetric;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float AudioVolumeMaster;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float AudioVolumeMusic;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float CachedAudioVolumeMusic;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float AudioVolumeSFX;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float AudioVolumeAmbience;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float AudioVolumeUISFX;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 FullScreenModeInt;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float XResolution;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float YResolution;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float PreviousXResolution;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float PreviousYResolution;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    int32 PreviousFullScreenModeInt;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PreviousVSync;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    int32 PreviousDisplayMonitor;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float ScrollingPourSensitivity;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float ScrollingRotationSensitivity;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float ScrollingStopWatchSensitivity;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float ScrollingGeneralSensitivity;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    FString CurrentCulture;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float ToolTipDelay;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    int32 DisplayMonitor;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float PreviousUIScale;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float UIScale;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    int32 GraphicsQuality;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool MotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultMotionBlurAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DefaultAntiAliasing;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float AimSensitivity;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float GamepadAimSensitivity;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float GamepadCursorSensitivity;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float GamepadCursorSensitivityOnHover;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool SwapAnalogueStickMovement;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool InvertedY;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool InvertedX;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool bUseHardwareCursor;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float MouseScrollSpeed;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool AdvancedContextualTipsOnly;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    int32 ContextualTipsOptions;
    
    UPROPERTY(Config)
    TArray<FString> NextFestLanguages;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool SkipTutorial;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    int32 PouringGraphics;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float SafeAreaScale;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool FirstTimeBoot;
    
    UPROPERTY()
    FOnSettingsChanged OnAudioSettingsApplied;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool bOverrideSwitchShadersToDefaultLit;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool bDoOnceSetAllTips;
    
    UBMGameSettings();
    UFUNCTION()
    void UsedCachedAudioVolumeMusic();
    
    UFUNCTION()
    void SetVerticalInverted(bool Inverted);
    
    UFUNCTION(BlueprintCallable)
    void SetUIScale(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetToolTipDelay(float Value);
    
    UFUNCTION()
    void SetToKeyboardMouseDefaults();
    
    UFUNCTION()
    void SetToGraphicsDefaults();
    
    UFUNCTION()
    void SetToGeneralDefaults();
    
    UFUNCTION()
    void SetToDisplayDefaults();
    
    UFUNCTION()
    void SetToControllerDefaults();
    
    UFUNCTION()
    void SetToAudioDefaults();
    
    UFUNCTION()
    void SetToAccessibilityDefaults();
    
    UFUNCTION()
    void SetSwapAnalogueStickMovement(bool Value);
    
    UFUNCTION()
    void SetSkipTutorial(bool Value);
    
    UFUNCTION()
    void SetScrollSpeedMouse(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollingStopWatchSensitivity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollingRotationSensitivity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollingPourSensitivity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollingGeneralSensitivity(float Value);
    
    UFUNCTION()
    void SetSafeScale(float Value, bool MarkGraphicsChanged);
    
    UFUNCTION()
    void SetPouringGraphicsInt(int32 Value);
    
    UFUNCTION()
    void SetHorizontalInverted(bool Inverted);
    
    UFUNCTION()
    void SetHardwareMouse(bool bHardwareMouse);
    
    UFUNCTION()
    void SetGamepadCursorSensitivityOnHover(float Value);
    
    UFUNCTION()
    void SetGamepadCursorSensitivity(float Value);
    
    UFUNCTION()
    void SetGamepadAimSensitivity(float Value);
    
    UFUNCTION()
    void SetGameInstance(UBMGameInstance* Instance);
    
    UFUNCTION(BlueprintCallable)
    void SetFullscreenResolutionInt(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFullScreenModeInt(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMonitor(int32 MonitorNumber);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCultureIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCulture(const FString& Culture);
    
    UFUNCTION()
    void SetContextualTipsOptions(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetbMotionBlurOn(bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioVolumeUISFX(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioVolumeSFX(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioVolumeMusic(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioVolumeMaster(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioVolumeAmbience(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetAimSensitivity(float Value);
    
    UFUNCTION()
    void SetAdvancedContextualTipsOnly(bool Value);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPouringGraphicsInt();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfMonitors();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfCultures(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFullScreenResolutionOptionNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFullScreenResolutionInt();
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentRefreshRate() const;
    
    UFUNCTION()
    int32 GetCurrentDisplayMontitor();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentCultureIndex(UObject* Context);
    
    UFUNCTION()
    int32 GetCurrentContextualTipsOption();
    
    UFUNCTION()
    void CacheAudioVolumeMusic();
    
    UFUNCTION(BlueprintCallable)
    void ApplyMonitorSetting();
    
    UFUNCTION()
    void ApplyBMSettings();
    
    UFUNCTION()
    void ApplyAudioVolumes();
    
};

