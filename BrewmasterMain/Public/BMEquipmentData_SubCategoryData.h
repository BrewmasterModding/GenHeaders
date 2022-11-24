#pragma once
#include "CoreMinimal.h"
#include "BMEquipmentData_ItemData.h"
#include "BMEquipmentData_SubCategoryData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMEquipmentData_SubCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMEquipmentData_ItemData> ItemData;
    
    FBMEquipmentData_SubCategoryData();
};

