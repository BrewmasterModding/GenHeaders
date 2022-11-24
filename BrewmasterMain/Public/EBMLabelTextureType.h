#pragma once
#include "CoreMinimal.h"
#include "EBMLabelTextureType.generated.h"

UENUM()
enum class EBMLabelTextureType : uint8 {
    NONE,
    Shape,
    Border,
    Background,
};

