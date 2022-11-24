#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMGenericIngredientData.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMItemData.h"
#include "BMWItemDetailsPanel.generated.h"

class UBMWItemDetail;
class UBMWItemDetailFlavorNote;
class UVerticalBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMWItemDetailsPanel : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMWItemDetail> ItemDetailsClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMWItemDetailFlavorNote> ItemDetailsFlavourNoteClass;
    
    UBMWItemDetailsPanel();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPrice(const FText& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetName(const FText& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemStatsVisibility(bool HasStats);
    
    UFUNCTION(BlueprintCallable)
    void SetIngredientStats(FBMGenericIngredientData& ItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIcon(FSlateBrush Icon);
    
    UFUNCTION(BlueprintCallable)
    void SetEquipmentStats(FBMItemData& ItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDescription(const FText& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HidePrice();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetStatBox();
    
};

