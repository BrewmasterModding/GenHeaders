#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMInputActionData.h"
#include "BMTopLevelWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMDeliveryScreen.generated.h"

class UBMShopItemExpanded;
class UBMWShopItem;
class UBMWItemDetailsPanel;
class UBMActionGlyph;
class UBMTextButtonWidget;
class UBMWItemCategoryContainer;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMDeliveryScreen : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBMWShopItem* DetailedShopItem;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMShopItemExpanded> ShopItemExpandedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData Retrieve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData Store;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData StoreAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData NextTabAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData PreviousTabAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData BackAction;
    
public:
    UBMDeliveryScreen();
protected:
    UFUNCTION()
    void UpdateDetailsPanelItemExpanded(UBMShopItemExpanded* ExpandedItem);
    
    UFUNCTION()
    void StoreItemAction();
    
    UFUNCTION()
    void StoreItem();
    
    UFUNCTION()
    void StoreAllItems();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDetailPanelValues(const FText& Name, FSlateBrush Icon, const FText& Description);
    
    UFUNCTION()
    void RetrieveItem();
    
    UFUNCTION()
    void HandleIngredientRetrieval();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetStoreButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetStoreAllButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetRetrieveButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetPreviousTabActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetNextTabActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWItemDetailsPanel* GetItemDetailsPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWItemCategoryContainer* GetItemCategoryContainer();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBackButton();
    
    UFUNCTION()
    void CloseScreen();
    
};

