#pragma once
#include "CoreMinimal.h"
#include "EBMFurnitureCategory.h"
#include "BMFurnitureData_CategoryData.h"
#include "BMDynamicFurnitureData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMDynamicFurnitureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<EBMFurnitureCategory, FBMFurnitureData_CategoryData> CategoryData;
    
    FBMDynamicFurnitureData();
};

