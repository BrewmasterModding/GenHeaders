#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "EBMUGCActions.h"
#include "ESizeBand.h"
#include "BMRecipePageRight.generated.h"

class UBMRecipeHUDInstruction;
class UBMBatchSizeWidget;
class UVerticalBox;
class UBMBulletTextItem;
class UBMTextButtonWidget;
class UPanelWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMRecipePageRight : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMRecipeHUDInstruction> RecipeInstructionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMBulletTextItem> BulletTextClass;
    
protected:
    UPROPERTY(Instanced)
    UBMBatchSizeWidget* BatchSizeWidget;
    
    UPROPERTY(Instanced)
    TArray<UBMRecipeHUDInstruction*> RecipeInstructionWidgets;
    
public:
    UBMRecipePageRight();
    UFUNCTION()
    void UnshareRecipe();
    
protected:
    UFUNCTION()
    void TryGoToNewRecipePage();
    
public:
    UFUNCTION()
    void ShareRecipe();
    
protected:
    UFUNCTION()
    void SetPublishingButtonsVisibility();
    
    UFUNCTION()
    void SetPinnedRecipe();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetFooterButtonVisibility(bool IsPlayerMadeRecipe);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentAndTotalRecipeNumbers(const FText& CurrentJobNumber, const FText& TotalJobsNumber);
    
protected:
    UFUNCTION()
    void OnUGCActionComplete(const EBMUGCActions& UGCAction, const bool& Success);
    
    UFUNCTION()
    void OnPublishingComplete(const EBMUGCActions& UGCAction, const bool& Success);
    
    UFUNCTION()
    void OnDeletionComplete(const bool& Success);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetYeastHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetUnshareRecipeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetShareRecipeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetPinRecipeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetOtherHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetInstructionHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetHopsHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetGrainHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetEquipmentHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetEditRecipeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetDeleteRecipeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMBatchSizeWidget* GetBatchSizeWidget();
    
    UFUNCTION()
    void EditRecipeInCreator();
    
    UFUNCTION()
    void DeleteRecipe();
    
    UFUNCTION()
    void ConfirmRecipeUnshare();
    
    UFUNCTION()
    void ConfirmRecipeShare();
    
    UFUNCTION()
    void ConfirmRecipeDeletion();
    
protected:
    UFUNCTION()
    void ClosePublishingPopupAndRefreshPage();
    
    UFUNCTION()
    void ClosePopup();
    
    UFUNCTION()
    void CloseDeletionPopupAndRefreshPage();
    
public:
    UFUNCTION()
    void CloseAndEditRecipeInCreator();
    
protected:
    UFUNCTION()
    void BatchSizeChanged(ESizeBand NewSize);
    
};

