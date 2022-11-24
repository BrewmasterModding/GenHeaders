#pragma once
#include "CoreMinimal.h"
#include "BMInputActionData.h"
#include "BMTopLevelWidget.h"
#include "BMPauseScreen.generated.h"

class UBMButton;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPauseScreen : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FBMInputActionData BackAction;
    
    UPROPERTY(Instanced)
    UBMButton* ResumeButton;
    
    UPROPERTY(Instanced)
    UBMButton* SaveButton;
    
    UPROPERTY(Instanced)
    UBMButton* LoadButton;
    
    UPROPERTY(Instanced)
    UBMButton* OptionsButton;
    
    UPROPERTY(Instanced)
    UBMButton* ExitButton;
    
    UPROPERTY(Instanced)
    UBMButton* MainMenuButton;
    
    UPROPERTY(Instanced)
    UBMButton* MeasurementSettingsButton;
    
public:
    UBMPauseScreen();
protected:
    UFUNCTION()
    void Resume();
    
    UFUNCTION()
    void RemoveBindings();
    
    UFUNCTION()
    void OpenSettings();
    
    UFUNCTION()
    void OpenSaveMenu();
    
    UFUNCTION()
    void OpenMeasurementSettings();
    
    UFUNCTION()
    void OpenMainMenu();
    
    UFUNCTION()
    void OpenLoadMenu();
    
    UFUNCTION()
    void OpenConfirmExitToMainMenuDialogue();
    
    UFUNCTION()
    void OpenConfirmExitDialouge();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetSaveButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetResumeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetOptionsButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetMeasurementSettingsButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetMainMenuButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetLoadButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetExitGameButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetBackActionGlyph();
    
    UFUNCTION()
    void ExitGame();
    
    UFUNCTION()
    void AddBindings();
    
};

