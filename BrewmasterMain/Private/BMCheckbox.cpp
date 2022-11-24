#include "BMCheckbox.h"

class UBMWShopItem;

void UBMCheckbox::SetBMCheckboxStyle(FCheckBoxStyle& InCheckBoxStyle) {
}

void UBMCheckbox::SetActionInputValue(EBMInput NewInput) {
}

void UBMCheckbox::PlayPressAudio() {
}

void UBMCheckbox::PlayHoverAudio() {
}

void UBMCheckbox::OnCheckboxUnhover() {
}

void UBMCheckbox::OnCheckboxHover() {
}

void UBMCheckbox::OnBMCheckBoxMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) {
}

void UBMCheckbox::BroadcastCheckboxIndex() {
}

void UBMCheckbox::BroadcastActionDelegate() {
}

void UBMCheckbox::BindMousePointerEvent(UBMWShopItem* ShopItemWidget) {
}

UBMCheckbox::UBMCheckbox() {
    this->CheckboxID = 0;
    this->AudioAssetList = NULL;
    this->bOverridePressAudio = false;
    this->bOverrideHoverAudio = false;
    this->ShopItem = NULL;
}

