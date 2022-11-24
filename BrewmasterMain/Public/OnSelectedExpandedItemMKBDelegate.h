#pragma once
#include "CoreMinimal.h"
#include "OnSelectedExpandedItemMKBDelegate.generated.h"

class UBMShopItemExpanded;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedExpandedItemMKB, UBMShopItemExpanded*, ShopExpandedItem);

