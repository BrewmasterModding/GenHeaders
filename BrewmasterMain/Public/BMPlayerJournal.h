#pragma once
#include "CoreMinimal.h"
#include "BMBookFunctionality.h"
#include "BMInputActionData.h"
#include "EBMUGCActions.h"
#include "BMPlayerJournal.generated.h"

class UBMTextButtonWidget;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPlayerJournal : public UBMBookFunctionality {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData OpenShopAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData OpenBrewpediaAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData OpenRecipeCreatorAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfIndexCategoriesPerPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfIndexRecipesPerPage;
    
public:
    UBMPlayerJournal();
    UFUNCTION()
    void TryGoToNewRecipePage();
    
    UFUNCTION()
    void RefreshRecipesAndStayOnCurrentPage();
    
protected:
    UFUNCTION()
    void OpenShop();
    
    UFUNCTION()
    void OpenRecipeCreator();
    
    UFUNCTION()
    void OpenBrewpedia();
    
    UFUNCTION()
    void OnUGCActionComplete(const EBMUGCActions& UGCAction, const bool& Success);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetOpenShopTextButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetOpenRecipeCreatorButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBrewpediaTextButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBrewpediaButton();
    
};

