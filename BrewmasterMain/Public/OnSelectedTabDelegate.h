#pragma once
#include "CoreMinimal.h"
#include "OnSelectedTabDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedTab, int32, TabToSwitchTo);

