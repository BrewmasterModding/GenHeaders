#include "BMInventoryStorageUnit.h"
#include "BMStorageInteraction.h"
#include "BMBinInteraction.h"

ABMInventoryStorageUnit::ABMInventoryStorageUnit() {
    this->StorageInteraction = CreateDefaultSubobject<UBMStorageInteraction>(TEXT("Storage Interaction"));
    this->BinInteraction = CreateDefaultSubobject<UBMBinInteraction>(TEXT("Bin Interaction"));
}

