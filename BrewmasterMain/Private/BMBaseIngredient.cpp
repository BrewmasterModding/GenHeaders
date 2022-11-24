#include "BMBaseIngredient.h"

ABMBaseIngredient::ABMBaseIngredient() {
    this->IngredientContainerSize = EBMIngredientContainerSize::Small;
    this->ContainerMesh = NULL;
    this->ObjectTransferComponent = NULL;
    this->CarryComponent = NULL;
}

