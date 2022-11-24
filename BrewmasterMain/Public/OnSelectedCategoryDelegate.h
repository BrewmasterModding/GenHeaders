#pragma once
#include "CoreMinimal.h"
#include "OnSelectedCategoryDelegate.generated.h"

class UBMWSubCategoryTab;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedCategory, UBMWSubCategoryTab*, CategoryTab);

