#pragma once
#include "CoreMinimal.h"
#include "OnTableAlteredDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTableAltered, int32, TableIndex);

