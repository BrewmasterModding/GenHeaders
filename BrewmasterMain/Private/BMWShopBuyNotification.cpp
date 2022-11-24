#include "BMWShopBuyNotification.h"

class UTweenContainer;

UTweenContainer* UBMWShopBuyNotification::TweenItemPurchasedNotification() {
    return NULL;
}

void UBMWShopBuyNotification::TweenDismissItemPurchasedNotification() {
}

bool UBMWShopBuyNotification::TryInterruptCurrentTween(bool bShouldCompleteTweens) {
    return false;
}



void UBMWShopBuyNotification::SetNotificationFromItemData(FBMItemData InItemData) {
}

void UBMWShopBuyNotification::SetNotificationFromIngredientData(FBMGenericIngredientData InIngredientData) {
}

void UBMWShopBuyNotification::SetNotificationFromCartData(int32 TotalItemsInCart, int32 CartCost) {
}

void UBMWShopBuyNotification::SetNotificationAddedToCart(FName ItemNameAdded) {
}


UBMWShopBuyNotification::UBMWShopBuyNotification() : UUserWidget(FObjectInitializer::Get()) {
    this->DismissButton = NULL;
    this->ActiveTweenContainer = NULL;
}

