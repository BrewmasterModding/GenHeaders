#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMPackagingMenu.generated.h"

class UBMDialogueBox;
class ALevelSequenceActor;
class UBMTextButtonWidget;
class UBMPackagingMenuButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPackagingMenu : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ALevelSequenceActor* LabelMakerIntroLevelActor;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* ResponseButton1;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* ResponseButton2;
    
    UPROPERTY(Instanced)
    UBMDialogueBox* WarningDialogue;
    
public:
    UBMPackagingMenu();
protected:
    UFUNCTION()
    void SetSpawnedBeerBottleActor();
    
    UFUNCTION()
    void SetBeerNameKeyboardFocus();
    
    UFUNCTION()
    void PlayLabelMakerIntroSequence();
    
    UFUNCTION()
    void GoToLabelMaker();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetResponseButton2();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetResponseButton1();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMPackagingMenuButton* GetRecipeSuggestionsButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMPackagingMenuButton* GetLabelMakerButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMPackagingMenuButton* GetGlassTypeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMPackagingMenuButton* GetBottleTypeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMPackagingMenuButton* GetBeerTemperatureButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMPackagingMenuButton* GetBeerStyleButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMPackagingMenuButton* GetBeerNameButton();
    
public:
    UFUNCTION()
    void FinishPackagingBeer();
    
    UFUNCTION()
    void ExitPackagingBeer();
    
protected:
    UFUNCTION()
    void ChooseBeerStyle();
    
    UFUNCTION()
    void ChooseBeerGlassStyle();
    
    UFUNCTION()
    void ChooseBeerBottleStyle();
    
    UFUNCTION()
    void BackInHistory();
    
};

