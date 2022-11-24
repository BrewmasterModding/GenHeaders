#include "BMShopItemExpanded.h"

class UBMUniversalItemScreen;

void UBMShopItemExpanded::UpdateItemVisualsForInventoryView() {
}






void UBMShopItemExpanded::SetItemID(FName Item) {
}


void UBMShopItemExpanded::SetItemAmount(int32 Amount) {
}




void UBMShopItemExpanded::RemoveButtonPressed() {
}

void UBMShopItemExpanded::PlusButtonPressed() {
}

void UBMShopItemExpanded::MinusButtonPressed() {
}





FName UBMShopItemExpanded::GetItemID() {
    return NAME_None;
}

int32 UBMShopItemExpanded::GetItemAmount() {
    return 0;
}



void UBMShopItemExpanded::BroadcastExpandedSelectedItem() {
}

void UBMShopItemExpanded::BroadcastExpandedKBAMSelectedItem() {
}

void UBMShopItemExpanded::BroadcastExpandedFocusedItem() {
}

void UBMShopItemExpanded::AddAmountButtonBinding(UBMUniversalItemScreen* NewUniversalScreen) {
}

UBMShopItemExpanded::UBMShopItemExpanded() {
    this->AmountAvailable = 0;
    this->UniversalScreen = NULL;
}

