#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EBMRecipeInstructionVariable.h"
#include "BMClickableText.generated.h"

class UBMButton;
class UBMRichText;
class UBMRecipeCreatorScreen;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMClickableText : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBMButton* HiddenButton;
    
    UPROPERTY(Instanced)
    UBMRichText* Text;
    
    UPROPERTY(Instanced)
    UBMRecipeCreatorScreen* RecipeCreator;
    
    UPROPERTY()
    int32 PhraseIndex;
    
    UPROPERTY()
    int32 IndexWithinPhrase;
    
    UPROPERTY()
    EBMRecipeInstructionVariable CurrentVariableType;
    
    UPROPERTY()
    FString TextAmount;
    
public:
    UBMClickableText();
    UFUNCTION()
    void SetupWidget(UBMRecipeCreatorScreen* Creator, int32 Phrase, int32 TextIndex, EBMRecipeInstructionVariable VariableType, bool bClickable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTextStyleSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTextStyleHovered();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTextStyleDefault();
    
    UFUNCTION()
    void SetText(const FString& InText);
    
    UFUNCTION()
    void SetClickableTextAsSelected();
    
    UFUNCTION()
    void SetButtonClickable(bool Clickable);
    
    UFUNCTION()
    void SetAmount(const FString& Amount);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetHiddenButton();
    
    UFUNCTION()
    EBMRecipeInstructionVariable GetCurrentVariableType();
    
    UFUNCTION()
    FString GetAmount();
    
};

