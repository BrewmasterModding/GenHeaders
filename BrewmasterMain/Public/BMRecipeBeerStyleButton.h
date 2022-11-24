#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMRecipeBeerStyleButton.generated.h"

class UBMRichText;
class UBMButton;
class UBMRecipeCreatorScreen;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMRecipeBeerStyleButton : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBMRichText* BeerStyleText;
    
    UPROPERTY(Instanced)
    UBMButton* BeerStyleButton;
    
    UPROPERTY()
    FString BeerStyleName;
    
    UPROPERTY()
    FString BeerStyleID;
    
    UPROPERTY(Instanced)
    UBMRecipeCreatorScreen* RecipeCreator;
    
public:
    UBMRecipeBeerStyleButton();
    UFUNCTION()
    void SetRecipeCreatorReference(UBMRecipeCreatorScreen* Creator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonSelected(bool bIsSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetBeerStyleName(const FString& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetBeerStyleID(const FString& ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetBeerStyleText();
    
    UFUNCTION(BlueprintCallable)
    FString GetBeerStyleName();
    
    UFUNCTION(BlueprintCallable)
    FString GetBeerStyleID();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBeerStyleButton();
    
    UFUNCTION()
    void ApplyBeerStyleToRecipeCreator();
    
};

