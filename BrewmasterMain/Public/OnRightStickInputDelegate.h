#pragma once
#include "CoreMinimal.h"
#include "OnRightStickInputDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRightStickInput, float, Pitch, float, Yaw);

