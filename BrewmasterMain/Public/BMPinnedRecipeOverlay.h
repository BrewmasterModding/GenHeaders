#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMTopLevelWidget.h"
#include "ESizeBand.h"
#include "BMInputActionData.h"
#include "BMRecipeData.h"
#include "BMPinnedRecipeOverlay.generated.h"

class UBMRecipeStat;
class UWidget;
class UBMCheckbox;
class UTexture2D;
class UBMRichText;
class UScrollBox;
class UBMBatchSizeWidget;
class UVerticalBox;
class UBMTextButtonWidget;
class UBMRecipeHUDInstruction;
class UBMPinnedRecipeIngredientBar;
class UDataTable;
class UImage;
class UMaterialInterface;
class UBMWFlavorList;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPinnedRecipeOverlay : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxFlavoursShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> TestTexture;
    
protected:
    UPROPERTY(Instanced)
    UBMRichText* RecipeNameText;
    
    UPROPERTY(Instanced)
    TArray<UBMRecipeStat*> RecipeStats;
    
    UPROPERTY(Instanced)
    UBMRichText* RecipeBeerDescription;
    
    UPROPERTY(Instanced)
    UBMCheckbox* IngredientsTab;
    
    UPROPERTY(Instanced)
    UBMCheckbox* InstructionsTab;
    
    UPROPERTY(Instanced)
    UWidget* InstructionsContent;
    
    UPROPERTY(Instanced)
    UWidget* IngredientsContent;
    
    UPROPERTY(Instanced)
    UScrollBox* InstructionsScrollBox;
    
    UPROPERTY(Instanced)
    UVerticalBox* InstructionScrollBoxContent;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* BackButton;
    
    UPROPERTY(Instanced)
    TArray<UBMRecipeHUDInstruction*> RecipeInstructionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMRecipeHUDInstruction> RecipeHUDInstructionBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMPinnedRecipeIngredientBar> PinnedRecipeIngredientBarBP;
    
    UPROPERTY(Instanced)
    UBMBatchSizeWidget* BatchSizeWidget;
    
    UPROPERTY()
    FBMInputActionData InstructionsAction;
    
    UPROPERTY()
    FBMInputActionData IngredientsAction;
    
    UPROPERTY()
    FBMInputActionData IncrementInstructionAction;
    
    UPROPERTY()
    FBMInputActionData DecrementInstructionAction;
    
    UPROPERTY()
    FBMInputActionData BackAction;
    
    UPROPERTY()
    FBMInputActionData UnpinRecipeAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* RecipeDataSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* EquipmentDataSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* IngredientDataSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* BeerStyleDataSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UTexture2D>> EquipmentTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UImage* BeerImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMRichText* CharacteristicHeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMRichText* BeerDescriptionHeader;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* NextInstructionButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* PrevInstructionButton;
    
public:
    UBMPinnedRecipeOverlay();
protected:
    UFUNCTION()
    void UnPinRecipe();
    
    UFUNCTION()
    void ToggleInstructionStepComplete(int32 StepToComplete, bool bStepIsCompleted);
    
public:
    UFUNCTION()
    void ShowInstructions(bool Checked);
    
    UFUNCTION()
    void ShowIngredients(bool Checked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShouldShowFlavourData(bool bShow);
    
    UFUNCTION()
    void SetRecipeData(FBMRecipeData Data);
    
    UFUNCTION()
    void SetInstructionsTabChecked();
    
    UFUNCTION()
    void SetIngredientsTabChecked();
    
    UFUNCTION(BlueprintCallable)
    void SetBeerImageTexture(TSoftObjectPtr<UMaterialInterface> TextureToUse);
    
    UFUNCTION(BlueprintCallable)
    void SetBeerImage(TSoftObjectPtr<UTexture2D> TextureToUse);
    
protected:
    UFUNCTION()
    void OpenRecipeCreator();
    
    UFUNCTION()
    void OnInstructionStepUnhovered(int32 HoveredRecipeStepIndex, bool bStepIsCompleted);
    
    UFUNCTION()
    void OnInstructionStepHovered(int32 HoveredRecipeStepIndex, bool bStepIsCompleted);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UBMPinnedRecipeIngredientBar* GetYeastIngredientBar();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetUnPinRecipeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWFlavorList* GetStandardFlavoursWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRecipeStat* GetRecipeStatBody();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRecipeStat* GetRecipeSRMStat();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRecipeStat* GetRecipeOriginalGravityStat();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetRecipeNameText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRecipeStat* GetRecipeIBUStat();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRecipeStat* GetRecipeFinalGravityStat();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRecipeStat* GetRecipeDifficultyStat();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRecipeStat* GetRecipeCategoryStat();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRecipeStat* GetRecipeCarbonationStat();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRecipeStat* GetRecipeBeerTypeStat();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRecipeStat* GetRecipeBeerStyleStat();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetRecipeBeerDescription();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRecipeStat* GetRecipeABVStat();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetPrevInstructionButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetNextInstructionButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMPinnedRecipeIngredientBar* GetMaltIngredientBar();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMCheckbox* GetInstructionsTab();
    
    UFUNCTION(BlueprintImplementableEvent)
    UScrollBox* GetInstructionsScrollBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetInstructionScrollboxContent();
    
    UFUNCTION(BlueprintImplementableEvent)
    UWidget* GetInstructionsContent();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetInstructionsActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMCheckbox* GetIngredientsTab();
    
    UFUNCTION(BlueprintImplementableEvent)
    UWidget* GetIngredientsContent();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetIngredientsActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMPinnedRecipeIngredientBar* GetHopsIngredientBar();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMPinnedRecipeIngredientBar* GetGenericIngredientBar();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWFlavorList* GetFlavorNotesWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMPinnedRecipeIngredientBar* GetEquipmentBar();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetEditRecipeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetCreateRecipeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetCharacteristicsHeader();
    
    UFUNCTION(BlueprintImplementableEvent)
    UImage* GetBeerImage();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetBeerDescriptionHeader();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMBatchSizeWidget* GetBatchSizeWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBackButton();
    
protected:
    UFUNCTION()
    void EditRecipeInCreator();
    
public:
    UFUNCTION()
    void ClosePinnedRecipe();
    
protected:
    UFUNCTION()
    void CloseAndOpenRecipeCreator();
    
    UFUNCTION()
    void CloseAndEditRecipeInCreator();
    
    UFUNCTION()
    void BatchSizeChanged(ESizeBand NewSize);
    
};

