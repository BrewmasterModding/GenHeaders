#include "BMFurnitureData.h"

FBMFurnitureData::FBMFurnitureData() {
    this->FurnitureCategory = EBMFurnitureCategory::NONE;
    this->Subcategory = EBMFurnitureSubcategory::NONE;
    this->bCanPlaceItemsOn = false;
    this->bCanEverBeMovedByPlayer = false;
    this->bCanPlaceOnShelf = false;
    this->bCanPlaceOnWall = false;
    this->bCanPlaceOnSurface = false;
    this->bCanPlaceOnFloor = false;
    this->bIsMagnetic = false;
}

