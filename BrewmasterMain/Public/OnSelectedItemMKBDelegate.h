#pragma once
#include "CoreMinimal.h"
#include "OnSelectedItemMKBDelegate.generated.h"

class UBMWShopItem;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedItemMKB, UBMWShopItem*, ShopItem);

