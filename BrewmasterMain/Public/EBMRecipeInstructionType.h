#pragma once
#include "CoreMinimal.h"
#include "EBMRecipeInstructionType.generated.h"

UENUM(BlueprintType)
enum class EBMRecipeInstructionType : uint8 {
    AddIngredientsToContainer,
    AddIngredientsForDuration,
    AddAmountOfWaterToContainer,
    RemoveIngredientsFromContainer,
    TransferToContainer,
    HeatToTemperature,
    HeatToTemperatureAndHoldForDuration,
    HoldTemperatureForDuration,
    CoolToTemperature,
    AddAmountOfWaterToContainerAndHeatToTemperature,
    UserSpecifiedText,
    HeatMashToTemperature,
    AddAmountOfStrikeWaterToMashTunToHeatMashToTemperature,
    HoldMashAtTemperatureForDuration,
    SpargeMashWithAmountOfWaterAndTransferAmountOfWortToContainer,
    SpargeMashToProduceAmountOfWort,
    SpargeMashAndTransferAmountOfWortToContainerType,
    HeatWortUntilBoiling,
    BoilWortForDuration,
    CoolWortToTemperature,
    AddIngredientsToBoilForDuration,
    FermentAtTemperatureForDuration,
    FermentAtTemperatureForDurationToReachFinalGravity,
    FermentUntilFinalGravityEqualsAmount,
    ConditionForDuration,
    ConditionForDurationUntilCarbonationEqualsAmount,
    ConditionUntilCarbonationIsAmount,
    TasteAndPackageBeer,
    HeatVolumeOfWaterToTemperatureInBrewContainerAndTransferToMashTun,
    ConditionAtTemperatureForDuration,
    TransferWortFromMashTunToBrewContainer,
    RemoveAllSteepableGrainFromBrewContainer,
    RemoveAllHopsFromBrewContainer,
};

