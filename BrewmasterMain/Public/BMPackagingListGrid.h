#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMPackagingListGrid.generated.h"

class ABMBaseBeerGlass;
class ABMBaseBeerBottle;
class UBMPackagingItem;
class ABMBaseActor;
class UBMPackagingMenuButton;
class UUniformGridPanel;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPackagingListGrid : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ABMBaseBeerGlass* OriginalGlass;
    
    UPROPERTY()
    ABMBaseBeerBottle* OriginalBeerBottle;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMPackagingItem> PackagingItemClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxColumns;
    
    UPROPERTY()
    ABMBaseActor* MainSelectedBottle;
    
    UPROPERTY()
    ABMBaseActor* MainSelectedGlass;
    
    UPROPERTY(EditDefaultsOnly)
    float HoverTimeToSwitch;
    
    UPROPERTY(Instanced)
    UBMPackagingMenuButton* BeerOnMenuButton;
    
public:
    UBMPackagingListGrid();
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Title);
    
    UFUNCTION()
    void SetSelectedTextureIndex(int32 Index);
    
    UFUNCTION()
    void SetSelectedTemplateIndex(int32 Index);
    
    UFUNCTION()
    void SetSelectedIndex(int32 Index);
    
    UFUNCTION()
    void SetSelectedGlassIndex(int32 Index);
    
    UFUNCTION()
    void SetSelectedBottleIndex(int32 Index);
    
    UFUNCTION()
    void SetMainSelectedItem(ABMBaseActor* MainSelectedItem);
    
    UFUNCTION(BlueprintImplementableEvent)
    UUniformGridPanel* GetGridPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DisableTabs();
    
    UFUNCTION()
    void ConfirmSelectedItem();
    
};

