#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "BMHUDInventoryBar.generated.h"

class UBorder;
class UHorizontalBox;
class UNamedSlot;
class UBMHUDInventorySlot;
class UTweenContainer;
class UPanelWidget;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMHUDInventoryBar : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBorder* InventoryBorder;
    
    UPROPERTY(Instanced)
    UHorizontalBox* ItemNameHorizontalBox;
    
    UPROPERTY(Instanced)
    UNamedSlot* PreviousItemGlyphRoot;
    
    UPROPERTY(Instanced)
    UNamedSlot* NextItemGlyphRoot;
    
    UPROPERTY(Instanced)
    TArray<UBMHUDInventorySlot*> InventorySlots;
    
    UPROPERTY()
    UTweenContainer* ActiveTweenContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMHUDInventorySlot> HUD_InventorySlotClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 TotalNumSlots;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush DefaultImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor borderDefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor borderItemAddedToColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemAddedInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemAddedPauseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemAddedOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor borderInventoryBlockedToColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InventoryBlockedInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InventoryBLockedPauseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InventoryBlockedOutTime;
    
public:
    UBMHUDInventoryBar();
    UFUNCTION(BlueprintCallable)
    void ShowWidgetsHiddenByTweens();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemVolumeText(const FText& ItemVolumeText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemNameText(const FText& ItemNameText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInventorySlotSpacing(const FMargin InventorySlotSpacing);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetInventoryNotHitTestable(bool State);
    
    UFUNCTION(BlueprintCallable)
    void ResetTweenAnimations();
    
    UFUNCTION(BlueprintCallable)
    void PlayTweenNotifyInventoryItemAdded(int32 SlotNumberToHighlight);
    
    UFUNCTION(BlueprintCallable)
    UTweenContainer* PlayTweenNotifyInventoryBlockedOut();
    
    UFUNCTION(BlueprintCallable)
    UTweenContainer* PlayTweenNotifyInventoryBlockedIn();
    
    UFUNCTION(BlueprintCallable)
    void PlayTweenNotifyInventoryBlocked();
    
    UFUNCTION(BlueprintCallable)
    void HideWidgetsForTweens();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UNamedSlot* GetPreviousItemGlyphRoot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMActionGlyph* GetPreviousItemActionGlyph();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UNamedSlot* GetNextItemActionGlyphRoot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMActionGlyph* GetNextItemActionGlyph();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UHorizontalBox* GetItemNameHorizontalBox();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FMargin GetInventorySlotSpacing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPanelWidget* GetInventorySlotsBox();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBorder* GetInventorySlotsBorder();
    
};

