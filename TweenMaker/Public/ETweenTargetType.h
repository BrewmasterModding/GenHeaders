#pragma once
#include "CoreMinimal.h"
#include "ETweenTargetType.generated.h"

UENUM()
enum class ETweenTargetType {
    Actor,
    SceneComponent,
    UMG,
    Material,
    Custom,
};

