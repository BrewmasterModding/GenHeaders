#pragma once
#include "CoreMinimal.h"
#include "EBMContainerAttachmentType.generated.h"

UENUM(BlueprintType)
enum class EBMContainerAttachmentType : uint8 {
    NONE,
    MeshBag,
    ImmersionCoil,
    Thermometer,
    Hydrometer,
    Tube,
    Siphon,
};

