#pragma once
#include "CoreMinimal.h"
#include "EBMCollisionMode.generated.h"

UENUM()
enum class EBMCollisionMode : uint8 {
    ActorCollision,
    ContainerCollision,
    FurnitureCollision,
};

