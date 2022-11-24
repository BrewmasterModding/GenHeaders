#pragma once
#include "CoreMinimal.h"
#include "BMFurnitureData_ItemData.h"
#include "BMFurnitureData_SubCategoryData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMFurnitureData_SubCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMFurnitureData_ItemData> ItemData;
    
    FBMFurnitureData_SubCategoryData();
};

