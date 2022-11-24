#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "EBMIngredientSubCategory.h"
#include "BMIngredientData_SubCategoryData.h"
#include "BMIngredientData_CategoryData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIngredientData_CategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSlateBrush> CategoryIcon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<EBMIngredientSubCategory, FBMIngredientData_SubCategoryData> SubCategoryData;
    
    FBMIngredientData_CategoryData();
};

