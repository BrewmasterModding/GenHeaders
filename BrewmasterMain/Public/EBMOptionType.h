#pragma once
#include "CoreMinimal.h"
#include "EBMOptionType.generated.h"

UENUM()
enum class EBMOptionType : uint8 {
    Button,
    Toggle,
    Slider,
    Carousel,
};

