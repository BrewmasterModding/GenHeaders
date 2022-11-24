#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EBMInventorySlotState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMHUDInventorySlot.generated.h"

class UTweenContainer;
class UImage;
class UBMRichText;
class UBorder;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMHUDInventorySlot : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    EBMInventorySlotState CurrentInventorySlotState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor BorderHighlightColorFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor BorderHighlightColorTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor BackgroundHighlightColorFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor BackgroundHighlightColorTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor TextHighlightColorFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor TextHighlightColorTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HighlightTimeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HighlightDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HighlightTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor BorderBlockedColorFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor BorderBlockedColorTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor BackgroundBlockedColorFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor BackgroundBlockedColorTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor TextBlockedColorFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor TextBlockedColorTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlockedTimeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlockedTimeOut;
    
private:
    UPROPERTY()
    UTweenContainer* ActiveTweenContainer;
    
public:
    UBMHUDInventorySlot();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisualForCurrentState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInventorySlotVisualState(const EBMInventorySlotState InventorySlotVisualState);
    
    UFUNCTION()
    void SetInventorySlotState(const EBMInventorySlotState InventorySlotState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInventorySlotLabelText(const FText& InventorySlotLabelText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInventorySlotItem(const FSlateBrush ItemBrush);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInventorySlotBG(const FSlateBrush BGBrush);
    
    UFUNCTION(BlueprintCallable)
    EBMInventorySlotState GetInventorySlotState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMRichText* GetInventorySlotLabelRichText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FSlateBrush GetInventorySlotItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBorder* GetInventorySlotBorder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetInventorySlotBackground();
    
};

