#pragma once
#include "CoreMinimal.h"
#include "OnSelectedItemDelegate.generated.h"

class UBMWShopItem;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedItem, UBMWShopItem*, ShopItem);

