#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMInputActionData.h"
#include "BMTopLevelWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "BMSocialMediaCarousel.h"
#include "BMMainMenuWidget.generated.h"

class UBMXboxAccountWidget;
class UBMButton;
class UPanelWidget;
class UBMSaveLoadSlot;
class UBMTextButtonWidget;
class UTexture2D;
class UUserWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMMainMenuWidget : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBMButton* ContinueButton;
    
    UPROPERTY(Instanced)
    UBMButton* NewGameButton;
    
    UPROPERTY(Instanced)
    UBMButton* LoadButton;
    
    UPROPERTY(Instanced)
    UBMButton* OptionsButton;
    
    UPROPERTY(Instanced)
    UBMButton* ExitButton;
    
    UPROPERTY(Instanced)
    UBMButton* BrewMasterModeButton;
    
    UPROPERTY(Instanced)
    UBMButton* CreativeModeButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* BackButton;
    
    UPROPERTY(Instanced)
    UBMSaveLoadSlot* SaveSlot;
    
    UPROPERTY(Instanced)
    UBMButton* CreditsMenuButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMButton> ButtonClass;
    
    UPROPERTY()
    bool SkipTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMSocialMediaCarousel> SocialMediaCarousel;
    
    UPROPERTY(Instanced)
    TArray<UBMButton*> SocialMediaButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData NextSocialMediaPost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData PreviousSocialMediaPost;
    
    UPROPERTY(Instanced)
    UBMXboxAccountWidget* AccountWidget;
    
    UPROPERTY()
    FBMInputActionData BackAction;
    
public:
    UBMMainMenuWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void TutorialEnabledVisuals(bool bSkipTutorial);
    
    UFUNCTION()
    void ToggleTutorial();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSocialMediaElement(const FText& Title, UTexture2D* Image, const FText& Description);
    
    UFUNCTION()
    void SetSocialMediaCarouselToIndex(int32 Index);
    
    UFUNCTION()
    void SetSaveSlotName(const FText& InText, TEnumAsByte<ETextCommit::Type> InCommitType);
    
    UFUNCTION()
    void SetSaveName();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMainMenuVisibility(ESlateVisibility State);
    
    UFUNCTION()
    bool SetContinueSaveIndex();
    
    UFUNCTION()
    void OpenSettings();
    
    UFUNCTION()
    void OpenNewBrewMasterLevel();
    
    UFUNCTION()
    void OpenLoadMenu();
    
    UFUNCTION()
    void OpenLastGame();
    
    UFUNCTION()
    void OpenConfirmExitDialouge();
    
    UFUNCTION()
    void IncreaseSocialMediaCarousel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetWishlistButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetSocialMediaButtonPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetSkipTutorialButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMSaveLoadSlot* GetSaveSlot();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetOptionsButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetNewGameModeButtonPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetNewGameButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetMainMenuButtonsPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetLoadButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetExitGameButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetCreditsButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UUserWidget* GetCreativeModeDetails();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetCreativeGameModeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetContinueButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBugReportButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UUserWidget* GetBrewmasterModeDetails();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBrewMasterGameModeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBackButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMXboxAccountWidget* GetAccountWidget();
    
    UFUNCTION()
    void ExitGame();
    
    UFUNCTION()
    void DecreaseSocialMediaCarousel();
    
    UFUNCTION()
    void CreditsScreen();
    
    UFUNCTION()
    void CreativeModeButtonUnhovered();
    
    UFUNCTION()
    void CreativeModeButtonHovered();
    
    UFUNCTION()
    void CreativeModeButtonClicked();
    
    UFUNCTION()
    void CreateNewGame();
    
    UFUNCTION()
    void ContinueButtonUnhovered();
    
    UFUNCTION()
    void ContinueButtonHovered();
    
    UFUNCTION()
    void BrewMasterButtonUnhovered();
    
    UFUNCTION()
    void BrewMasterButtonHovered();
    
    UFUNCTION()
    void BrewMasterButtonClicked();
    
    UFUNCTION()
    void BackToMainMenu();
    
};

