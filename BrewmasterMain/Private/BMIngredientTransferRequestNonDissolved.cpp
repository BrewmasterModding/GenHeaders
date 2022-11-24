#include "BMIngredientTransferRequestNonDissolved.h"

FBMIngredientTransferRequestNonDissolved::FBMIngredientTransferRequestNonDissolved() {
    this->ContainerToAddTo = NULL;
    this->ContainerToRemoveFrom = NULL;
    this->LiquidTransferType = EBMLiquidTransferType::NONE;
    this->LiquidVolumeToTransfer = 0.00f;
}

