#pragma once
#include "CoreMinimal.h"
#include "ESpritePolygonMode.generated.h"

UENUM()
namespace ESpritePolygonMode {
    enum Type {
        SourceBoundingBox,
        TightBoundingBox,
        ShrinkWrapped,
        FullyCustom,
        Diced,
    };
}

