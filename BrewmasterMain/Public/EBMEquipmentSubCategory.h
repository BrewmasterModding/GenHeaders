#pragma once
#include "CoreMinimal.h"
#include "EBMEquipmentSubCategory.generated.h"

UENUM(BlueprintType)
enum class EBMEquipmentSubCategory : uint8 {
    NONE,
    Generic,
    BrewPot,
    ElectricKettle,
    Bucket,
    MeasuringContainer,
    MashTun,
    ElectricMashKettle,
    FermentationContainer,
    Barrel,
    Keg,
    Heating,
    Cooling,
    Tube,
    Siphon,
    Pump,
    StirringTool,
    Thermometer,
    Hydrometer,
    Scale,
    Carboy,
    ConicalFermenter,
    CO2Tank,
};

