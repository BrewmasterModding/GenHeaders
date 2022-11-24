#include "SocketData.h"

FSocketData::FSocketData() {
    this->MinimumIngredientSize = EBMIngredientContainerSize::Small;
    this->MaximumIngredientSize = EBMIngredientContainerSize::Small;
    this->MinimumObjectSize = ESizeBand::NONE;
    this->MaximumObjectSize = ESizeBand::NONE;
}

