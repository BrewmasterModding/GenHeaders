#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMSaveLoadSlot.generated.h"

class UBMSaveLoadWidget;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSaveLoadSlot : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FString SaveName;
    
    UPROPERTY(Instanced)
    UBMSaveLoadWidget* SavingWidget;
    
public:
    UBMSaveLoadSlot();
    UFUNCTION(BlueprintImplementableEvent)
    void SetUnselected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSaveType(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSaveTime(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSaveName(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsNewSlot();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideSaveInformation();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetButton();
    
protected:
    UFUNCTION()
    void ButtonHovered();
    
    UFUNCTION()
    void ButtonClicked();
    
};

