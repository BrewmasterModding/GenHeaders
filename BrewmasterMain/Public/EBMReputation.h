#pragma once
#include "CoreMinimal.h"
#include "EBMReputation.generated.h"

UENUM()
enum class EBMReputation : uint8 {
    Unknown,
    Friend,
    Patron,
    Associate,
    Affiliate,
    Partner,
};

