#pragma once
#include "CoreMinimal.h"
#include "EBMLiquidStatType.generated.h"

UENUM(BlueprintType)
enum class EBMLiquidStatType : uint8 {
    NONE,
    Mass,
    Volume,
    Temperature,
    Colour,
    ABV,
    SpecificGravity,
    IBU,
    ProteinContent,
    Carbonation,
    Contamination,
    OriginalGravity,
    Liquid,
    CurrentCarbonation,
    TargetCarbonation,
    Clarity,
    Body,
    AliveYeastPopulation,
    ActiveYeastPopulation,
    DormantYeastPopulation,
    DeadYeastPopulation,
    DeadYeastWhileActive,
    Flavour,
    ContaminationData,
    Last,
};

