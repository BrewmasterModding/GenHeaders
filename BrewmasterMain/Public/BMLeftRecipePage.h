#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMLeftRecipePage.generated.h"

class UBMRecipeStat;
class UMaterialInterface;
class UTexture2D;
class UVerticalBox;
class UBMButton;
class UBMWFlavorList;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMLeftRecipePage : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMRecipeStat> RecipeStatClass;
    
protected:
    UPROPERTY(Instanced)
    TArray<UBMRecipeStat*> RecipeStatWidgets;
    
public:
    UBMLeftRecipePage();
    UFUNCTION(BlueprintImplementableEvent)
    void ShouldShowFlavourData(bool bShow);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRecipeImage(UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFlavourNotes(const FText& Notes);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDescription(const FText& Desc);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerTexture(UTexture2D* BeerImage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerImage(UMaterialInterface* BeerImage);
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetStatHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWFlavorList* GetStandardFlavoursWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWFlavorList* GetFlavorNotesWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetEditRecipeButton();
    
    UFUNCTION()
    void EditRecipeInCreator();
    
    UFUNCTION()
    void CloseAndEditRecipeInCreator();
    
};

