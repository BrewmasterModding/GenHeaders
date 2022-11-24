#pragma once
#include "CoreMinimal.h"
#include "EBMLiquidPouringShaderPropertyType.generated.h"

UENUM()
enum class EBMLiquidPouringShaderPropertyType {
    LiquidColour,
    Opacity,
    Foam,
    FoamColour,
    PourSize,
    PouringStatics,
};

