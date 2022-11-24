#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMHUDXrayModeWidget.h"
#include "BMHUDFullInfomationWidget.generated.h"

class UDataTable;
class UBMActionGlyph;
class UBMItemViewPropertySlot;
class UBMHUDActionPrompt;
class UVerticalBox;
class UBMScrollBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMHUDFullInfomationWidget : public UBMHUDXrayModeWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* IconData;
    
protected:
    UPROPERTY(Instanced)
    TArray<UBMItemViewPropertySlot*> CurrentIngredientWidgets;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMItemViewPropertySlot> ItemViewPropertySlotClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAllowWrapping;
    
public:
    UBMHUDFullInfomationWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleStatsWidget(bool StatState);
    
    UFUNCTION(BlueprintCallable)
    void LoadDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDActionPrompt* GetToggleModeActionPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMScrollBox* GetItemScrollBox();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UVerticalBox* GetItemPropertiesWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetIncreaseIcon();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetDecreaseIcon();
    
};

