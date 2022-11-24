#pragma once
#include "CoreMinimal.h"
#include "BMTopLevelWidget.h"
#include "BMInputActionData.h"
#include "BMCalendarOverlay.generated.h"

class UBMButton;
class UBorder;
class UTweenContainer;
class ABMSimulationControl;
class USlider;
class ABMTimeController;
class UBMRichText;
class ATweenManagerActor;
class UBMAudioAssetListBase;
class UAudioComponent;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCalendarOverlay : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeInSecondsToSkipDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlurStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SliderChangeAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SliderMultiplierAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSliderSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TweeningTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ValueChangeOccurance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LoopBackgroundTintOncePerNumberOfDays;
    
protected:
    UPROPERTY(Instanced)
    UBMButton* BackButton;
    
    UPROPERTY(Instanced)
    UBMButton* RelaxButton;
    
    UPROPERTY(Instanced)
    UBMButton* StopRelaxingButton;
    
    UPROPERTY(Instanced)
    USlider* DaySlider;
    
    UPROPERTY(Instanced)
    USlider* WaitingDaySlider;
    
    UPROPERTY(Instanced)
    UBorder* CalendarBorder;
    
    UPROPERTY(Instanced)
    UBorder* WaitingContentBorder;
    
    UPROPERTY()
    ABMTimeController* TimeController;
    
    UPROPERTY()
    ABMSimulationControl* SimController;
    
    UPROPERTY(Instanced)
    UBMRichText* DateText;
    
    UPROPERTY(Instanced)
    UBMRichText* TimeText;
    
    UPROPERTY(Instanced)
    UBMRichText* TargetDayText;
    
    UPROPERTY(Instanced)
    UBMRichText* WaitingDateText;
    
    UPROPERTY(Instanced)
    UBMRichText* WaitingTimeText;
    
    UPROPERTY(Instanced)
    UBMRichText* WaitingTargetDayText;
    
    UPROPERTY()
    UTweenContainer* TweenContainer;
    
    UPROPERTY()
    ATweenManagerActor* TweenManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData IncreaseSliderAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData DecreaseSliderAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData ConfirmButtonAction;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
    UPROPERTY(Instanced)
    UAudioComponent* TimeAdvancingAudio;
    
public:
    UBMCalendarOverlay();
    UFUNCTION()
    void TurnOnBlur();
    
    UFUNCTION()
    void TurnOffBlur();
    
    UFUNCTION()
    void StopTimeSkipping();
    
    UFUNCTION()
    void StartTimeSkippingFromControllerAction();
    
    UFUNCTION()
    void StartTimeSkipping();
    
    UFUNCTION()
    void SingleIncrease();
    
    UFUNCTION()
    void SingleDecrease();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBlurAmount(float Strength);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBackgoundColorTintFromTimeOfDay(float TimeInDays);
    
    UFUNCTION()
    void ModulateCalendarBackgroundTint();
    
    UFUNCTION()
    void IncreaseDaySlider(float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetWaitingTimeText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetWaitingTargetDayText();
    
    UFUNCTION(BlueprintImplementableEvent)
    USlider* GetWaitingDaySlider();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetWaitingDateText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBorder* GetWaitingContentBorder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetTimeText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetTargetDayText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetStopRelaxingButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetRelaxButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetIncreaseActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetDecreaseActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    USlider* GetDaySlider();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetDateText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetConfirmButtonActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBorder* GetCalendarBorder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBackButton();
    
    UFUNCTION()
    void FadeInWaitingContentBorder();
    
    UFUNCTION()
    void FadeInCalendarBorder();
    
    UFUNCTION()
    void DecreaseDaySlider(float DeltaTime);
    
    UFUNCTION()
    void CloseCalendar();
    
};

