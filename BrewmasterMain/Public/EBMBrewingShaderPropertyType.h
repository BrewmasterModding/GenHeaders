#pragma once
#include "CoreMinimal.h"
#include "EBMBrewingShaderPropertyType.generated.h"

UENUM(BlueprintType)
enum class EBMBrewingShaderPropertyType : uint8 {
    Volume,
    VolumePercent,
    Viscosity,
    LiquidColour,
    HeadColour,
    Clarity,
    Boiling,
    HeadAndBubbles,
    BubblesFromRecievingPour,
    Sediment,
    SurfaceYeastRaft,
    GrainSuspension,
    Foam,
    FoamColour,
    PourSize,
    PouringVisualTweaks,
    YeastPopulation,
    YeastActivity,
    PourRate,
    HeadSize,
    Bubbles,
    Opacity,
    WortBoil,
    LingeringBubbles,
    Agitation,
    PouringSequenceBool,
};

