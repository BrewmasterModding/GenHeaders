#pragma once
#include "CoreMinimal.h"
#include "EBMSeasonsEnum.h"
#include "SeasonChangeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSeasonChangeDelegate, EBMSeasonsEnum, CurrentSeason);

