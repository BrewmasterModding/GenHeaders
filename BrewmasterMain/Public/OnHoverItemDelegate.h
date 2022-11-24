#pragma once
#include "CoreMinimal.h"
#include "OnHoverItemDelegate.generated.h"

class UBMWShopItem;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoverItem, UBMWShopItem*, ShopItem);

