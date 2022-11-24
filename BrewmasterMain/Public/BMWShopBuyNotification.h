#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMItemData.h"
#include "BMGenericIngredientData.h"
#include "BMWShopBuyNotification.generated.h"

class UBMButton;
class UTweenContainer;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMWShopBuyNotification : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector2D ItemBrushSize;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSlateBrush AddToCartBrush;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSlateBrush CartBrush;
    
    UPROPERTY(Instanced)
    UBMButton* DismissButton;
    
    UPROPERTY()
    UTweenContainer* ActiveTweenContainer;
    
    UBMWShopBuyNotification();
    UFUNCTION(BlueprintCallable)
    UTweenContainer* TweenItemPurchasedNotification();
    
    UFUNCTION(BlueprintCallable)
    void TweenDismissItemPurchasedNotification();
    
    UFUNCTION()
    bool TryInterruptCurrentTween(bool bShouldCompleteTweens);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNotificationText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNotificationIcon(FSlateBrush InBrush);
    
    UFUNCTION()
    void SetNotificationFromItemData(FBMItemData InItemData);
    
    UFUNCTION()
    void SetNotificationFromIngredientData(FBMGenericIngredientData InIngredientData);
    
    UFUNCTION()
    void SetNotificationFromCartData(int32 TotalItemsInCart, int32 CartCost);
    
    UFUNCTION()
    void SetNotificationAddedToCart(FName ItemNameAdded);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetDismissButton();
    
};

