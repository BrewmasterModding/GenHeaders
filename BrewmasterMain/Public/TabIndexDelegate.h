#pragma once
#include "CoreMinimal.h"
#include "TabIndexDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTabIndex, int32, TabID);

