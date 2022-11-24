#pragma once
#include "CoreMinimal.h"
#include "EFlavourCategory.generated.h"

UENUM(BlueprintType)
enum class EFlavourCategory : uint8 {
    NONE,
    CrispClean,
    HoppyBitter,
    MaltySweet,
    DarkRoasted,
    Smokey,
    FruitSpice,
    SourTart,
    Off,
};

