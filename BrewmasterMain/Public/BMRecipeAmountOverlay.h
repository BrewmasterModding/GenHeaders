#pragma once
#include "CoreMinimal.h"
#include "BMTopLevelWidget.h"
#include "BMRecipeInstruction.h"
#include "BMRecipeAmountData.h"
#include "EBMRecipeInstructionVariable.h"
#include "BMRecipeAmountOverlay.generated.h"

class UBMActionGlyph;
class UEditableText;
class UBMRichText;
class UBMRecipeCreatorScreen;
class UBMHUDActionPrompt;
class UBMButton;
class UBMTextButtonWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMRecipeAmountOverlay : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UEditableText* EditableAmountText;
    
    UPROPERTY(Instanced)
    UBMRichText* UnitText;
    
    UPROPERTY(Instanced)
    UBMRecipeCreatorScreen* RecipeCreator;
    
    UPROPERTY()
    FBMRecipeAmountData AmountData;
    
    UPROPERTY(EditAnywhere)
    float InputInterval;
    
    UPROPERTY(EditAnywhere)
    bool InputPressed;
    
public:
    UBMRecipeAmountOverlay();
    UFUNCTION(BlueprintImplementableEvent)
    void SetTipText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTipShown(bool bShown);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetConvertedText(const FText& Text);
    
    UFUNCTION()
    void OpenRecipeAmountOverlay(FBMRecipeInstruction Type, EBMRecipeInstructionVariable Context, UBMRecipeCreatorScreen* CreatorReference, const FString& PreviousText, const FString& CurerntValue);
    
    UFUNCTION()
    void IncreaseAmount();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetUnitText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMHUDActionPrompt* GetTextBoxActionPrompt();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetIncreaseButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetIncreaseActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UEditableText* GetEditableText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetDecreaseButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetDecreaseActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetConfirmButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetCancelButton();
    
    UFUNCTION()
    FString GetAmountString();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableAmountTextInput();
    
    UFUNCTION()
    void DecreaseAmount();
    
    UFUNCTION()
    void CloseOverlay();
    
    UFUNCTION()
    void CheckForHeldInput();
    
    UFUNCTION()
    void ApplyEditableText(const FText& InText);
    
    UFUNCTION()
    void AllowHeldInput();
    
};

