#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EBMRecipeInstructionVariable.h"
#include "BMRecipeCreatorAddPhrase.generated.h"

class UBMRecipeCreatorScreen;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMRecipeCreatorAddPhrase : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UBMRecipeCreatorScreen* RecipeCreator;
    
    UPROPERTY()
    int32 PhraseIndex;
    
    UPROPERTY()
    int32 IndexWithinPhrase;
    
    UPROPERTY()
    EBMRecipeInstructionVariable CurrentVariableType;
    
    UBMRecipeCreatorAddPhrase();
    UFUNCTION()
    void SetupWidget(UBMRecipeCreatorScreen* Creator, int32 Phrase, EBMRecipeInstructionVariable VariableType);
    
    UFUNCTION()
    EBMRecipeInstructionVariable GetCurrentVariableType();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBMButton();
    
};

