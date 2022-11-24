#include "BMPackagingListGrid.h"

class ABMBaseActor;


void UBMPackagingListGrid::SetSelectedTextureIndex(int32 Index) {
}

void UBMPackagingListGrid::SetSelectedTemplateIndex(int32 Index) {
}

void UBMPackagingListGrid::SetSelectedIndex(int32 Index) {
}

void UBMPackagingListGrid::SetSelectedGlassIndex(int32 Index) {
}

void UBMPackagingListGrid::SetSelectedBottleIndex(int32 Index) {
}

void UBMPackagingListGrid::SetMainSelectedItem(ABMBaseActor* MainSelectedItem) {
}



void UBMPackagingListGrid::ConfirmSelectedItem() {
}

UBMPackagingListGrid::UBMPackagingListGrid() {
    this->OriginalGlass = NULL;
    this->OriginalBeerBottle = NULL;
    this->PackagingItemClass = NULL;
    this->MaxColumns = 2;
    this->MainSelectedBottle = NULL;
    this->MainSelectedGlass = NULL;
    this->HoverTimeToSwitch = 0.50f;
    this->BeerOnMenuButton = NULL;
}

