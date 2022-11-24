#pragma once
#include "CoreMinimal.h"
#include "ETastingSequence.generated.h"

UENUM()
enum class ETastingSequence {
    Setup,
    MoveContainerToSide,
    SetUpUIScreen,
    TastedSequence,
    TastingPage1,
    TastingPage2,
    TastingSummary,
    PackagingScreen,
    OFF,
};

