#include "BMItemData.h"

FBMItemData::FBMItemData() {
    this->StorageLocation = EBMInventoryStorageLocation::NONE;
    this->EquipmentCategory = EBMEquipmentCategory::NONE;
    this->EquipmentSubCategory = EBMEquipmentSubCategory::NONE;
    this->EquipmentMaterialCategory = EBMEquipmentMaterial::NONE;
    this->IngredientContainerCategory = EBMIngredientContainerCategory::NONE;
    this->FurnitureCategory = EBMFurnitureCategory::NONE;
    this->FurnitureSubCategory = EBMFurnitureSubcategory::NONE;
    this->bDynamicObject = false;
    this->bCollisionEnabled = false;
    this->Grams = 0.00f;
    this->EquipmentSizeBand = ESizeBand::NONE;
    this->Transparent = false;
    this->DimensionX = 0;
    this->DimensionY = 0;
    this->DimensionZ = 0;
}

