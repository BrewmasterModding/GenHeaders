#pragma once
#include "CoreMinimal.h"
#include "OnUpdateExpandedDetailsDelegate.generated.h"

class UBMShopItemExpanded;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateExpandedDetails, UBMShopItemExpanded*, ShopExpandedItem);

