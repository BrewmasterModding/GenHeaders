#pragma once
#include "CoreMinimal.h"
#include "OnCheckBoxStatePressedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCheckBoxStatePressed, int32, CheckBoxIndex);

