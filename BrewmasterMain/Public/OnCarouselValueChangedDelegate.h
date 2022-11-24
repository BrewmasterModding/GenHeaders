#pragma once
#include "CoreMinimal.h"
#include "OnCarouselValueChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCarouselValueChanged, int32, Value);

