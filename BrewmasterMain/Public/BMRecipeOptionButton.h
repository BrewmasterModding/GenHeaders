#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EBMIngredientCategory.h"
#include "EBMEquipmentCategory.h"
#include "BMRecipeOptionButton.generated.h"

class UBMSelectableButton;
class UBMRichText;
class UBMRecipeCreatorScrollingList;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMRecipeOptionButton : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBMSelectableButton* OptionButton;
    
    UPROPERTY(Instanced)
    UBMRichText* OptionText;
    
    UPROPERTY(Instanced)
    UBMRecipeCreatorScrollingList* ScrollingList;
    
public:
    UBMRecipeOptionButton();
    UFUNCTION()
    void SetScrollingListReference(UBMRecipeCreatorScrollingList* ListReference);
    
    UFUNCTION()
    void SetOptionText(const FString& InText);
    
    UFUNCTION()
    void SetOptionIsSelected();
    
    UFUNCTION()
    void SetIngredientType(EBMIngredientCategory Type);
    
    UFUNCTION()
    void SetIngredientID(const FString& ID);
    
    UFUNCTION()
    void SetContainerCategory(EBMEquipmentCategory Category);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetOptionText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMSelectableButton* GetOptionButton();
    
    UFUNCTION()
    EBMIngredientCategory GetIngredientType();
    
    UFUNCTION()
    FString GetIngredientID();
    
    UFUNCTION()
    EBMEquipmentCategory GetContainerType();
    
};

