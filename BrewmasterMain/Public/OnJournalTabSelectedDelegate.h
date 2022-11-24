#pragma once
#include "CoreMinimal.h"
#include "OnJournalTabSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJournalTabSelected, int32, TabToSwitchTo);

