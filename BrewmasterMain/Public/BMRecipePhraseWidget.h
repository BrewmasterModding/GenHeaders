#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMRecipeInstruction.h"
#include "EBMRecipeInstructionVariable.h"
#include "BMRecipePhraseWidget.generated.h"

class UBMBasicRichText;
class UBMSelectableButton;
class UBMRecipeCreatorScreen;
class UBMClickableText;
class UBMRecipeCreatorAddPhrase;
class UDataTable;
class UWidget;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMRecipePhraseWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMClickableText> ClickableTextBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMBasicRichText> BasicRichTextBP;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMRecipeCreatorAddPhrase> AddPhraseBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* TextStyle;
    
    UPROPERTY(Instanced)
    TArray<UBMClickableText*> ClickableTextObjects;
    
    UPROPERTY()
    FBMRecipeInstruction PhraseInstruction;
    
    UPROPERTY(Instanced)
    UBMRecipeCreatorAddPhrase* AddPhraseButton;
    
    UPROPERTY(EditDefaultsOnly)
    int32 HorizontalMax;
    
protected:
    UPROPERTY(Instanced)
    TArray<UWidget*> RegularTextObjects;
    
    UPROPERTY(Instanced)
    UBMRecipeCreatorScreen* CreatorReference;
    
    UPROPERTY(Instanced)
    UBMSelectableButton* PhraseButton;
    
    UPROPERTY(Instanced)
    UBMButton* DeleteButton;
    
    UPROPERTY(Instanced)
    UBMButton* MoveUpButton;
    
    UPROPERTY(Instanced)
    UBMButton* MoveDownButton;
    
public:
    UBMRecipePhraseWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void ShowArrowGlyph();
    
    UFUNCTION()
    bool ShouldRefreshClickables();
    
    UFUNCTION()
    void SetupPhraseWidget(UBMRecipeCreatorScreen* RecipeCreator, FBMRecipeInstruction Instruction, int32 Index, bool bAllowClickable, bool bMoveable, bool bDeleteable);
    
    UFUNCTION()
    void SetRefreshClickables(bool Refresh);
    
    UFUNCTION()
    void SetPhraseAsSelected();
    
    UFUNCTION()
    void SetPhraseAsActiveInRecipeCreator();
    
    UFUNCTION()
    void RebuildPhraseTextUsingData(bool Clickable);
    
    UFUNCTION()
    void MoveInstructionUp();
    
    UFUNCTION()
    void MoveInstructionDown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideMoveableArrows();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideDeleteIcon();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideArrowGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMSelectableButton* GetPhraseButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetMoveUpButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetMoveDownButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetDeleteButton();
    
    UFUNCTION()
    FString GetClickableTextAtIndex(int32 TextIndex);
    
    UFUNCTION()
    void EditClickableText(int32 TextIndex, const FString& NewText);
    
    UFUNCTION()
    void DeleteInstruction();
    
    UFUNCTION()
    void ClearPhrase();
    
    UFUNCTION()
    void AddRegularText(const FString& TextToAdd, bool Bold);
    
    UFUNCTION()
    void AddNewIngredientName();
    
    UFUNCTION()
    void AddClickableText(const FString& TextToAdd, EBMRecipeInstructionVariable Variable, bool bClickable);
    
    UFUNCTION()
    void AddClickableCallbacks(UBMClickableText* ClickableText, EBMRecipeInstructionVariable Variable);
    
    UFUNCTION()
    void AddClickableButton(const FString& PlusText, EBMRecipeInstructionVariable Variable);
    
};

