#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EIconType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMIngredientUIIconCatergories.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIngredientUIIconCatergories : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIconType IconCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CategoryIcon;
    
    FBMIngredientUIIconCatergories();
};

