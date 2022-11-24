#pragma once
#include "CoreMinimal.h"
#include "OnSelectedShoppingTabDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedShoppingTab, int32, TabToSwitchTo);

