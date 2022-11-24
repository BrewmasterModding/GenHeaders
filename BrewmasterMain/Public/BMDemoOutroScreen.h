#pragma once
#include "CoreMinimal.h"
#include "BMTopLevelWidget.h"
#include "BMDemoOutroScreen.generated.h"

class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMDemoOutroScreen : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBMButton* ContinueButton;
    
    UPROPERTY(Instanced)
    UBMButton* MainMenuButton;
    
    UPROPERTY(Instanced)
    UBMButton* ExitGameButton;
    
public:
    UBMDemoOutroScreen();
protected:
    UFUNCTION()
    void MainMenu();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetMainMenuButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetExitGameButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetContinueButton();
    
    UFUNCTION()
    void ExitGame();
    
    UFUNCTION()
    void ContinueGame();
    
};

