#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "EBMCalendarImageType.h"
#include "BMCalendarDayWidget.generated.h"

class UImage;
class UBMButton;
class UBMCalendarScreen;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCalendarDayWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush PassedTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush StrikedTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CurrentTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush TargetTexture;
    
protected:
    UPROPERTY(Instanced)
    UBMCalendarScreen* CalendarScreen;
    
    UPROPERTY()
    int32 DayNumber;
    
    UPROPERTY(Instanced)
    UImage* StrikeImage;
    
public:
    UBMCalendarDayWidget();
    UFUNCTION()
    void UpdateCalendarPressed();
    
    UFUNCTION()
    void UpdateCalendarHovered();
    
    UFUNCTION()
    void SetPressedState(bool Pressed);
    
    UFUNCTION()
    void SetCalendarScreen(UBMCalendarScreen* Screen, int32 Day);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonText(const FText& Text, bool bSundayColour, bool StrikeThrough);
    
    UFUNCTION()
    void RemoveCalendarHover();
    
    UFUNCTION(BlueprintImplementableEvent)
    UImage* GetStrikeThroughImage();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetButton();
    
    UFUNCTION()
    void DisplayImageType(EBMCalendarImageType Type);
    
};

