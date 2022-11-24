#pragma once
#include "CoreMinimal.h"
#include "EBeerStyleSpeciality.generated.h"

UENUM()
enum class EBeerStyleSpeciality : uint8 {
    NONE,
    Fruit,
    FruitAndSpice,
    Spice,
    WoodAged,
};

