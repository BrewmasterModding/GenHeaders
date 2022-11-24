#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMPinnedRecipeIngrediantGrid.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPinnedRecipeIngrediantGrid : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMPinnedRecipeIngrediantGrid();
    UFUNCTION(BlueprintImplementableEvent)
    void SetOwnedCheckbox(bool Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIngredientAmountText(const FText& AmountString);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetGridIcon(FSlateBrush Brush);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAmountHidden(bool bHidden);
    
};

