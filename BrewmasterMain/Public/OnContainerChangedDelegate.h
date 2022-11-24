#pragma once
#include "CoreMinimal.h"
#include "OnContainerChangedDelegate.generated.h"

class ABMDynamicContainer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnContainerChanged, ABMDynamicContainer*, NewContainer);

