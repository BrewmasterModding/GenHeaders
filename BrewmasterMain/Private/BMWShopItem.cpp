#include "BMWShopItem.h"















void UBMWShopItem::BroadcastUnfocusedItem() {
}

void UBMWShopItem::BroadcastSelectedItemMKB() {
}

void UBMWShopItem::BroadcastSelectedItem() {
}

void UBMWShopItem::BroadcastFocusedItem() {
}

UBMWShopItem::UBMWShopItem() {
    this->IsIngredient = false;
    this->IsFurniture = false;
    this->IsInCart = false;
    this->ParentWidget = NULL;
}

