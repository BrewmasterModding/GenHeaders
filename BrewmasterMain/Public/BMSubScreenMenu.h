#pragma once
#include "CoreMinimal.h"
#include "BMTopLevelWidget.h"
#include "BMEditableParamID.h"
#include "BMSubScreenMenu.generated.h"

class UBMPackagingSubScreenList;
class UBMTextButtonWidget;
class UBMUserWidget;
class UBMDialogueBox;
class UBMPackagingListGrid;
class UWidgetSwitcher;
class UBMLabelMakerColourWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSubScreenMenu : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBMTextButtonWidget* ResponseButton1;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* ResponseButton2;
    
    UPROPERTY(Instanced)
    UBMDialogueBox* WarningDialogue;
    
public:
    UBMSubScreenMenu();
    UFUNCTION()
    void SwitchToMainMenu();
    
    UFUNCTION()
    void SwitchToContent(UBMUserWidget* InWidget);
    
    UFUNCTION()
    void ShowLabelMakerEditMenu();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool SetSubMenuText(const FText& NewText);
    
    UFUNCTION()
    void OnBackButtonPressed();
    
    UFUNCTION()
    void GoToParamSubMenu(FBMEditableParamID inParamID);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetResponseButton2();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetResponseButton1();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMPackagingSubScreenList* GetListScreen();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMPackagingListGrid* GetListGridScreen();
    
    UFUNCTION(BlueprintImplementableEvent)
    UWidgetSwitcher* GetContentSwitcher();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMLabelMakerColourWidget* GetColorSelectionScreen();
    
    UFUNCTION()
    void ClearLabelAndReturnToMenu();
    
};

