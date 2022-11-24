#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMRecipeAddInstructionButton.generated.h"

class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMRecipeAddInstructionButton : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMRecipeAddInstructionButton();
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBMButton();
    
};

