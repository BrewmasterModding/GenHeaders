#pragma once
#include "CoreMinimal.h"
#include "OnRecipeInstructionStepPressedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRecipeInstructionStepPressed, int32, PressedStepIndex, bool, bStepIsCompleted);

