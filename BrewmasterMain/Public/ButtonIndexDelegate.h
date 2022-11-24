#pragma once
#include "CoreMinimal.h"
#include "ButtonIndexDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonIndex, int32, ButtonID);

