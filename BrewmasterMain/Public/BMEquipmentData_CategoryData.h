#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMEquipmentData_SubCategoryData.h"
#include "EBMEquipmentSubCategory.h"
#include "BMEquipmentData_CategoryData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMEquipmentData_CategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSlateBrush> CategoryIcon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<EBMEquipmentSubCategory, FBMEquipmentData_SubCategoryData> SubCategoryData;
    
    FBMEquipmentData_CategoryData();
};

