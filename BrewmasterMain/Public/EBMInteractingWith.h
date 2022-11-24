#pragma once
#include "CoreMinimal.h"
#include "EBMInteractingWith.generated.h"

UENUM()
enum class EBMInteractingWith : uint8 {
    NONE,
    Floor,
    Magnetic,
    Shelf,
    Surface,
    Wall,
};

