#pragma once
#include "CoreMinimal.h"
#include "OnRecipeInstructionHoveredDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRecipeInstructionHovered, int32, HoveredStepIndex, bool, bStepIsCompleted);

