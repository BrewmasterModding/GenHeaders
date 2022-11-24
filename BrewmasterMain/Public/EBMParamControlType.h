#pragma once
#include "CoreMinimal.h"
#include "EBMParamControlType.generated.h"

UENUM(BlueprintType)
enum class EBMParamControlType : uint8 {
    NONE,
    Slider,
    Toggle,
    TexturePicker,
    Colour,
    TextStyle,
};

