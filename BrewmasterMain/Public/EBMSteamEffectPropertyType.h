#pragma once
#include "CoreMinimal.h"
#include "EBMSteamEffectPropertyType.generated.h"

UENUM(BlueprintType)
enum class EBMSteamEffectPropertyType : uint8 {
    SteamAmountAndLifetime,
    Temperature,
};

