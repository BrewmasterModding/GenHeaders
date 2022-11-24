#pragma once
#include "CoreMinimal.h"
#include "OnRecipeInstructionUnhoveredDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRecipeInstructionUnhovered, int32, HoveredStepIndex, bool, bStepIsCompleted);

