#pragma once
#include "CoreMinimal.h"
#include "EBMShopUIMode.generated.h"

UENUM()
enum class EBMShopUIMode : uint8 {
    NONE,
    Shop,
    ViewShoppingList,
    ViewShoppingCart,
};

