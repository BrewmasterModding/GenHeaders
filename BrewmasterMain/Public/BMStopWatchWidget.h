#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "BMInputActionData.h"
#include "BMStopWatchWidget.generated.h"

class UBMAudioAssetListBase;
class UBMHUDActionPrompt;
class UBMTimeSkipSpeedToggle;
class ABMSimulationControl;
class UHorizontalBox;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMStopWatchWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UBMTimeSkipSpeedToggle*> TimeSkipSpeedToggles;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMTimeSkipSpeedToggle> TimeSkipSpeedToggleClass;
    
    UPROPERTY(EditAnywhere)
    FMargin TimeSkipSpeedTogglePadding;
    
    UPROPERTY(Instanced)
    UBMHUDActionPrompt* PausePrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData SpeedUpAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData SlowDownAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData PauseAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData BackAction;
    
    UPROPERTY()
    ABMSimulationControl* SimController;
    
    UPROPERTY()
    TArray<int32> TimeSkipSpeed;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
public:
    UBMStopWatchWidget();
    UFUNCTION()
    void ToggleStopWatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleMode(bool IsFullScreen);
    
    UFUNCTION()
    void SpeedUpTime();
    
    UFUNCTION()
    void SlowDownTime();
    
    UFUNCTION(BlueprintCallable)
    void SetToggleButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimeText(const FText& TimeText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSeasonText(const FText& TimeText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDayText(const FText& TimeText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentSpeedText(const FText& TimeText);
    
    UFUNCTION()
    void SetBuildModeStopWatch(bool bBuildModeOn);
    
    UFUNCTION(BlueprintCallable)
    void SetBindings();
    
    UFUNCTION(BlueprintCallable)
    void Set3DModelVisibility(bool IsVisible);
    
    UFUNCTION()
    void PauseTime();
    
    UFUNCTION(BlueprintCallable)
    void NativeConstruct();
    
    UFUNCTION(BlueprintCallable)
    void HighlightCurrentTimeSkipSpeed(bool InIsPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UHorizontalBox* GetTimeSpeedWidgetHolder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetTime(float Hours, float Minutes, float Seconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMActionGlyph* GetSpeedUpGlyph();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMActionGlyph* GetSlowDownGlyph();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMActionGlyph* GetPauseGlyph();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDActionPrompt* GetPauseActionPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMActionGlyph* GetOpenGlyph();
    
    UFUNCTION()
    bool GetAudioAssetList();
    
    UFUNCTION(BlueprintCallable)
    void EnableTimeSkipping();
    
    UFUNCTION(BlueprintCallable)
    void DisableTimeSkipping();
    
    UFUNCTION(BlueprintCallable)
    void CreateTimeString(bool ShortString);
    
    UFUNCTION(BlueprintCallable)
    FText CreateSpeedText(int32 TimeSkipIndex);
    
    UFUNCTION(BlueprintCallable)
    void CreateSpeedString();
    
    UFUNCTION(BlueprintCallable)
    void CreateSeasonString();
    
    UFUNCTION(BlueprintCallable)
    void CreateDayString();
    
};

