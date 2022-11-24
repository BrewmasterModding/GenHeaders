#pragma once
#include "CoreMinimal.h"
#include "EBMAchievType.generated.h"

UENUM(BlueprintType)
enum class EBMAchievType : uint8 {
    Brewing,
    Job,
    Competition,
    Narrative,
    ItemUnlocks,
    Other,
};

