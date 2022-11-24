#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMTopLevelWidget.h"
#include "BMCalendarScreen.generated.h"

class UBMButton;
class UBMCalendarDayWidget;
class USizeBox;
class ABMTimeController;
class UTweenContainer;
class ABMSimulationControl;
class UBMRichText;
class ATweenManagerActor;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCalendarScreen : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UBMButton* BackButton;
    
    UPROPERTY(Instanced)
    UBMButton* TimeCompressionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMCalendarDayWidget> CalendarDayWidgetBP;
    
    UPROPERTY(Instanced)
    TArray<UBMCalendarDayWidget*> CalendarDayArray;
    
    UPROPERTY(Instanced)
    USizeBox* CalendarSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeToSkipPerDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlurStrength;
    
protected:
    UPROPERTY()
    ABMTimeController* TimeController;
    
    UPROPERTY()
    ABMSimulationControl* SimController;
    
    UPROPERTY(Instanced)
    UBMRichText* CurrentDateText;
    
    UPROPERTY(Instanced)
    UBMRichText* CurrentTime;
    
    UPROPERTY(Instanced)
    UBMRichText* ExternalDateText;
    
    UPROPERTY(Instanced)
    UBMRichText* ExternalTime;
    
    UPROPERTY()
    UTweenContainer* TweenContainer;
    
    UPROPERTY()
    ATweenManagerActor* TweenManager;
    
    UPROPERTY(Instanced)
    UBMButton* StopButton;
    
public:
    UBMCalendarScreen();
    UFUNCTION()
    void TurnOnBlur();
    
    UFUNCTION()
    void TurnOffBlur();
    
    UFUNCTION()
    void StopTimeSkipping();
    
    UFUNCTION(BlueprintCallable)
    void SkipTimeToSelectedDay();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBlurAmount(float Strength);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetStopButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetCompressTimeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    USizeBox* GetCalendarSizeBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBackButton();
    
    UFUNCTION(BlueprintCallable)
    void CloseCalendar();
    
};

