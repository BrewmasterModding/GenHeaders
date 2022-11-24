#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "TabIndexDelegate.h"
#include "BMOptionsTab.generated.h"

class UCheckBox;
class UBMOptionWidget;
class UBMOptionsScreen;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMOptionsTab : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    TArray<UBMOptionWidget*> OptionsList;
    
    UPROPERTY()
    FTabIndex OnTabClicked;
    
protected:
    UPROPERTY(Instanced)
    UBMOptionsScreen* OptionScreen;
    
public:
    UBMOptionsTab();
    UFUNCTION()
    void SetupTab(UBMOptionsScreen* NewOptionScreen, int32 Index, const FText& Name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTabName(const FText& Name);
    
    UFUNCTION()
    void OptionsScreenSwitchTab(bool IsChecked);
    
    UFUNCTION(BlueprintImplementableEvent)
    UCheckBox* GetTabCheckBox();
    
    UFUNCTION()
    void BroadcastTabIndex(bool Checked);
    
};

