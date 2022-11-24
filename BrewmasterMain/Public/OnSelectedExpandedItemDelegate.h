#pragma once
#include "CoreMinimal.h"
#include "OnSelectedExpandedItemDelegate.generated.h"

class UBMShopItemExpanded;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedExpandedItem, UBMShopItemExpanded*, ShopExpandedItem);

