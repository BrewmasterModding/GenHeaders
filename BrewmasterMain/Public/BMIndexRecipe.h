#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMIndexRecipe.generated.h"

class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMIndexRecipe : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMIndexRecipe();
    UFUNCTION(BlueprintImplementableEvent)
    void SetWidgetIndex(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRecipeTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPageNumber(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCategoryTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCategoryDescription(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideRecommended();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetRecipeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetCategoryButton();
    
};

