#pragma once
#include "CoreMinimal.h"
#include "ESizeBand.h"
#include "OnSizeChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSizeChanged, ESizeBand, SizeBand);

