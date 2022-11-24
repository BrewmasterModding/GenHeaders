#pragma once
#include "CoreMinimal.h"
#include "OnStepChangeInputDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStepChangeInput, bool, bIsIncrease);

