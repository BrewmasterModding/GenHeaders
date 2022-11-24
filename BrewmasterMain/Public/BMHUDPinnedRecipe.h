#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMInputActionData.h"
#include "BMHUDPinnedRecipe.generated.h"

class UBMRecipeHUDInstruction;
class UScrollBox;
class UDataTable;
class UBMGameSettings;
class UBMRichText;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMHUDPinnedRecipe : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScrollPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData PinnedRecipeAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData NextInstructionAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData PreviousInstructionAction;
    
    UPROPERTY(Instanced)
    UScrollBox* InstructionScrollBox;
    
    UPROPERTY(Instanced)
    UBMRichText* PinnedRecipeTitleText;
    
    UPROPERTY()
    UBMGameSettings* GameSettings;
    
    UPROPERTY(Instanced)
    TArray<UBMRecipeHUDInstruction*> RecipeInstructionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMRecipeHUDInstruction> RecipeHUDInstructionBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* RecipeDataSource;
    
    UPROPERTY()
    FBMInputActionData IncrementInstructionAction;
    
    UPROPERTY()
    FBMInputActionData DecrementInstructionAction;
    
public:
    UBMHUDPinnedRecipe();
    UFUNCTION()
    void OnCultureChanged();
    
    UFUNCTION()
    void LoadInstructions();
    
    UFUNCTION()
    void IncrementInstructionStep();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetPinnedRecipeTitleText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetPinnedActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UScrollBox* GetInstructionScrollBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetIncrementActionPrompt();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetIncrementActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetDecrementActionPrompt();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetDecrementActionGlyph();
    
    UFUNCTION()
    void DecrementInstructionStep();
    
};

