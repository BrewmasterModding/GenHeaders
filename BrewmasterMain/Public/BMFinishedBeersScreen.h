#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMTopLevelWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BMFinishedBeersScreen.generated.h"

class ABMTastingSequenceManager;
class UBMTextButtonWidget;
class UBMFinishedBeerNameSlot;
class UBMHUDInventoryBar;
class UVerticalBox;
class UBMScrollBox;
class UBMButton;
class UBMFinishedBeerStatPanel;
class UBMActionGlyph;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMFinishedBeersScreen : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    ABMTastingSequenceManager* TastingSequenceManager;
    
protected:
    UPROPERTY()
    FTransform BeerGlassTransform;
    
    UPROPERTY()
    FTransform BeerBottleTransform;
    
    UPROPERTY(Instanced)
    UBMFinishedBeerNameSlot* CurrentlySelectedBeer;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMFinishedBeerNameSlot> FinishedBeerSlotClass;
    
public:
    UBMFinishedBeersScreen();
protected:
    UFUNCTION()
    void ToggleStatsPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SubmittedButtonSelected(bool bIsSelected);
    
    UFUNCTION()
    void SubmitBeer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void StoredButtonSelected(bool bIsSelected);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowNoSubmittedBeersText(bool bShow);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowNoStoredBeersText(bool bShow);
    
    UFUNCTION()
    void SelectButton(int32 I);
    
    UFUNCTION()
    void RetrieveContainer();
    
    UFUNCTION()
    void RetrieveBeerBottle();
    
    UFUNCTION()
    void RePackageBeer();
    
    UFUNCTION()
    void PopulateSubmittedBeers();
    
    UFUNCTION()
    void PopulateStoredBeers();
    
    UFUNCTION()
    void LoadBeerGlass();
    
    UFUNCTION()
    void LoadBeerBottle();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMScrollBox* GetSubmittedScrollBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetSubmittedBeerHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetSubmittedBeerButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetSubmitButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMScrollBox* GetStoredScrollBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetStoredBeerHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetStoredBeerButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetStatsPanelEnableButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMFinishedBeerStatPanel* GetStatPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetRetriveContainerButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetRetriveBeerBottleButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetRepackageButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetPreviousActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetNextActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMHUDInventoryBar* GetInventoryBar();
    
    UFUNCTION(BlueprintImplementableEvent)
    UWidgetSwitcher* GetBeerWidgetSwitcher();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBackButton();
    
    UFUNCTION()
    void ExitScreen();
    
};

