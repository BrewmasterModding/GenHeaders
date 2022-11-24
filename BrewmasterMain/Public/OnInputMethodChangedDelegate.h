#pragma once
#include "CoreMinimal.h"
#include "OnInputMethodChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputMethodChanged, bool, IsGamepad);

