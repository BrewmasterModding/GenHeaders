#pragma once
#include "CoreMinimal.h"
#include "EBMBookType.generated.h"

UENUM()
enum class EBMBookType : uint8 {
    NONE,
    BrewJournal,
    BrewQuartery,
    BrewPedia,
};

