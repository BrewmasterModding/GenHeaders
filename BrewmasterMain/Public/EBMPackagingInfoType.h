#pragma once
#include "CoreMinimal.h"
#include "EBMPackagingInfoType.generated.h"

UENUM(BlueprintType)
enum class EBMPackagingInfoType : uint8 {
    None,
    BeerName,
    BeerStyle,
    BottleType,
    GlassType,
    Label,
    LabelCategoriesList,
    LabelParamList,
    SingleLabelParam,
    Temperature,
    Recipe,
};

