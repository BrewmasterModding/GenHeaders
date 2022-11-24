#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EBMRecipeCreatorListType.h"
#include "BMTopLevelWidget.h"
#include "EBMRecipeInstructionVariable.h"
#include "BMInputActionData.h"
#include "EBMRecipePropertiesEditFlags.h"
#include "BMGuidedRecipeData.h"
#include "BMRecipeInstruction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "BMRecipeData.h"
#include "BMRecipeCreatorScreen.generated.h"

class UBMRecipeHUDInstruction;
class UBMRecipeAddInstructionButton;
class UBMRecipeBeerStyleButton;
class UBMTextButtonWidget;
class UBMRecipePhraseWidget;
class UDataTable;
class UCanvasPanel;
class UBMRecipeAmountOverlay;
class UMultiLineEditableText;
class UWidget;
class UBMButton;
class UScrollBox;
class UBMRichText;
class UBMRecipeCreatorScrollingList;
class UMaterialInstance;
class UTexture2D;
class UVerticalBox;
class UBMHUDActionPrompt;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMRecipeCreatorScreen : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMRecipeAddInstructionButton> AddRecipeInstructionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMRecipeBeerStyleButton> BeerStyleButtonBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMRecipePhraseWidget> RecipePhraseWidgetBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMRecipeHUDInstruction> PinnedRecipeStepBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* AllBeerStylesDataSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* RecipeInstructionsDataSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* RecipeDataSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* AllGrainInstructionsSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* ExtractInstructionsSource;
    
protected:
    UPROPERTY(Instanced)
    UCanvasPanel* BeerTypePanel;
    
    UPROPERTY(Instanced)
    UCanvasPanel* RecipePhrasePanel;
    
    UPROPERTY(Instanced)
    TArray<UWidget*> RecipeCreatorPanels;
    
    UPROPERTY(Instanced)
    UBMButton* RecipeNameButton;
    
    UPROPERTY(Instanced)
    UBMButton* RecipeDescriptionButton;
    
    UPROPERTY(Instanced)
    UBMButton* BeerStyleButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* GuidedRecipeButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* AdvancedRecipeButton;
    
    UPROPERTY(Instanced)
    UBMButton* ExtractButton;
    
    UPROPERTY(Instanced)
    UBMButton* AllGrainButton;
    
    UPROPERTY(Instanced)
    UBMButton* AddNewInstructionButton;
    
    UPROPERTY(Instanced)
    UBMButton* InstructionScreenBeerTypeButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* MainNewInstructionButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* ClearInstructionsButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* DeleteInstructionButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* FilterByOwnedButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* FilterStyleByOwnedButton;
    
    UPROPERTY(Instanced)
    UScrollBox* RecipeInstructionScrollBox;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* ClearStepsSummary;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* CancelButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* ConfirmButton;
    
    UPROPERTY(Instanced)
    UBMRichText* SummaryPanelRecipeNameText;
    
    UPROPERTY(Instanced)
    UMultiLineEditableText* EditableTextRecipeDescription;
    
    UPROPERTY(Instanced)
    UBMRichText* SummaryPanelRecipeDescription;
    
    UPROPERTY(Instanced)
    UBMRichText* SummaryPanelBeerStyle;
    
    UPROPERTY(Instanced)
    UBMRichText* InstructionScreenBeerTypeText;
    
    UPROPERTY(Instanced)
    UBMRichText* ExtractDescriptionText;
    
    UPROPERTY(Instanced)
    UBMRichText* AllGrainDescriptionText;
    
    UPROPERTY(Instanced)
    UBMRecipeCreatorScrollingList* RecipeCreatorScrollingList;
    
    UPROPERTY(Instanced)
    TArray<UBMRecipeBeerStyleButton*> BeerStyleButtons;
    
    UPROPERTY(Instanced)
    TArray<UBMRecipePhraseWidget*> PossiblePhraseInstructions;
    
    UPROPERTY(Instanced)
    TArray<UBMRecipePhraseWidget*> RecipePhraseInstructions;
    
    UPROPERTY(Instanced)
    UBMRecipePhraseWidget* ActivePhraseWidget;
    
    UPROPERTY(Instanced)
    UBMRecipeAmountOverlay* AmountOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData BackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData ConfirmAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData FilterAction;
    
    UPROPERTY()
    TArray<FBMGuidedRecipeData> GuidedRecipeSteps;
    
    UPROPERTY(Instanced)
    UBMRecipePhraseWidget* CurrentGuidedStepPhrase;
    
    UPROPERTY()
    int32 CurrentGuidedStep;
    
    UPROPERTY()
    bool bRemoveAddNewInstructionBinding;
    
    UPROPERTY()
    bool GuidedRecipeComplete;
    
    UPROPERTY()
    FName CurrentGuidedStepTip;
    
    UPROPERTY()
    TArray<FBMRecipeInstruction> PreviousInstructionPhrases;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData IncreaseAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData DecreaseAction;
    
    UPROPERTY(VisibleAnywhere)
    EBMRecipePropertiesEditFlags RecipePropertiesEdited;
    
    UBMRecipeCreatorScreen();
    UFUNCTION()
    void UpdateRecipeData();
    
protected:
    UFUNCTION()
    void SortScrollingListByOwned();
    
public:
    UFUNCTION()
    void ShowPossiblePhraseInstructions();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ShowPhraseListTip(bool bShow);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowMainCreatorTip(bool bShow);
    
    UFUNCTION()
    void ShowGuidedRecipePanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowDynamicListTip(bool bShow);
    
    UFUNCTION()
    void ShowAdvancedRecipePanel();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetStyleSelectScreenTip(const FText& Text);
    
protected:
    UFUNCTION()
    void SetRecipeDescPanelActive();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetPhraseListScreenTip(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void SetPanelVisible(int32 PanelIndex);
    
    UFUNCTION()
    void SetNewActiveInstructionText(const FText& InText, TEnumAsByte<ETextCommit::Type> InCommitType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMainRecipeCreatorScreenTip(const FText& Text);
    
    UFUNCTION()
    void SetEditorRecipeNameText(const FText& InText);
    
    UFUNCTION()
    void SetEditorRecipeName(const FText& InText);
    
    UFUNCTION()
    void SetEditorRecipeDescriptionText(const FText& InText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDynamicListScreenTip(const FText& Text);
    
    UFUNCTION()
    void SetCurrentVariableType(EBMRecipeInstructionVariable NewVariableType);
    
    UFUNCTION()
    void SetChosenInstructionPhrase(FBMRecipeInstruction Instruction);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonSelected(bool Selected, UBMButton* Button);
    
protected:
    UFUNCTION()
    void SetBeerStylePanelActive();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerStyleName(const FText& StyleName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerStyleMaterial(UMaterialInstance* Material);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerStyleImage(UTexture2D* Texture);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBeerStyleID(const FString& BeerStyleID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerStyleDesc(const FText& Desc);
    
    UFUNCTION(BlueprintCallable)
    void SetBeerStyle(const FString& BeerStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetAllGrain(bool AllGrain);
    
    UFUNCTION()
    void SetActivePhraseWidgetSelected(UBMRecipePhraseWidget* Phrase);
    
    UFUNCTION()
    void SetActiveClickableText(int32 PhraseIndex, int32 ClickableTextIndex);
    
    UFUNCTION()
    void SaveCurrentRecipeToDataTable();
    
    UFUNCTION()
    void RefreshPhraseIngredients();
    
protected:
    UFUNCTION()
    void RefreshClickableTextRestrictions();
    
public:
    UFUNCTION()
    void OpenScrollingList(EBMRecipeCreatorListType Type);
    
    UFUNCTION()
    void OpenRecipeNameDialogueBox();
    
protected:
    UFUNCTION()
    void OpenJournal();
    
public:
    UFUNCTION()
    void OpenInstructionTextDialogueBox();
    
    UFUNCTION()
    void OpenIngredientTypeSelectPanel();
    
    UFUNCTION()
    void OpenIngredientNameSelectPanel();
    
    UFUNCTION()
    void OpenContainerTypeSelectPanel();
    
    UFUNCTION()
    void OpenClearInstructionDialogueBox();
    
    UFUNCTION()
    void OpenAmountOverlayWithActiveType();
    
    UFUNCTION()
    void OpenAmountOverlay(EBMRecipeInstructionVariable InstructionType);
    
    UFUNCTION()
    void MoveUpBinding();
    
    UFUNCTION()
    void MoveDownBinding();
    
    UFUNCTION()
    void LoadRecipeDataIn(FBMRecipeData Recipe);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void GuidedRecipeVisibility(bool ShowGuided);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetSummaryRecipeInstructionVerticalBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetSummaryPanelRecipeNameText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetSummaryPanelRecipeDescription();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetSummaryPanelBeerStyleText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UCanvasPanel* GetSummaryPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetSummaryClearStepsButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UCanvasPanel* GetRecipePhrasePanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetRecipeNameButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UScrollBox* GetRecipeInstructionScrollBox();
    
protected:
    UFUNCTION()
    TArray<FBMRecipeInstruction> GetRecipeInstructionFromPhrases();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UCanvasPanel* GetRecipeEditorPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMHUDActionPrompt* GetRecipeDescriptionPromptGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UMultiLineEditableText* GetRecipeDescEditableText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetRecipeDescButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UWidget* GetRecipeCreatorScrollingListPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRecipeCreatorScrollingList* GetRecipeCreatorScrollingList();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetNewInstructionButton();
    
    UFUNCTION()
    FString GetNameForRecipeVariableType(EBMRecipeInstructionVariable Variable);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetMainNewInstructionButton();
    
    UFUNCTION()
    int32 GetLastIngredientNameIndex();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetInstructionScreenBeerTypeText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetInstructionScreenBeerTypeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetGuidedRecipeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetFilterStyleByOwnedButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetFilterByOwnedButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetExtractButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetEditRecipeSummaryButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetDeleteInstructionButton();
    
    UFUNCTION()
    FString GetDefaultNameForIngredient(int32 ClickableIndex);
    
    UFUNCTION()
    EBMRecipeInstructionVariable GetCurrentInstructionVariableType();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetConfirmButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetClearInstructionsButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UCanvasPanel* GetCategorySelectPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetCancelButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UCanvasPanel* GetBeerTypePanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBeerStyleButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UCanvasPanel* GetBeerDescriptionPanel();
    
    UFUNCTION()
    FString GetAmountUnitSpecifier(EBMRecipeInstructionVariable VariableType, bool IsLiquid);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetAllGrainButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetAdvancedRecipeButton();
    
    UFUNCTION()
    void ForceUpdateEditorData();
    
    UFUNCTION()
    void ExitGuidedRecipe();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void EnableRecipeDescriptionTextInput();
    
    UFUNCTION()
    void EditRecipeSteps();
    
    UFUNCTION()
    void EditingNewActiveInstructionText(const FText& InText);
    
public:
    UFUNCTION()
    void DeleteSelectedInstruction();
    
    UFUNCTION()
    void ConfirmRecipeNameChange();
    
    UFUNCTION()
    void ConfirmNewAmountForVariable();
    
    UFUNCTION()
    void ConfirmInstructionTextChange();
    
    UFUNCTION()
    void ConfirmExitGuidedRecipe();
    
    UFUNCTION()
    void ConfirmDynamicListSelection();
    
protected:
    UFUNCTION()
    void ConfirmActivePanel();
    
public:
    UFUNCTION()
    void CloseRecipeCreator();
    
protected:
    UFUNCTION()
    void CloseDialougeBox();
    
    UFUNCTION()
    void ClearSummaryInstructions();
    
public:
    UFUNCTION()
    void ClearAllRecipeInstructions();
    
protected:
    UFUNCTION()
    void ChooseExtract();
    
    UFUNCTION()
    void ChooseAllGrain();
    
    UFUNCTION()
    void ChangeBrewTypeWarning();
    
    UFUNCTION()
    void ChangeBrewType();
    
    UFUNCTION()
    void CancelActivePanel();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BeerStyleSidePanelVisible(bool bVisible);
    
    UFUNCTION()
    void AddInstructionPhraseToRecipe();
    
    UFUNCTION()
    void AddAdditionalIngredientName();
    
};

