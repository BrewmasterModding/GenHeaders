#pragma once
#include "CoreMinimal.h"
#include "EBMEquipmentCategory.h"
#include "BMEquipmentData_CategoryData.h"
#include "BMEquipmentData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMEquipmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<EBMEquipmentCategory, FBMEquipmentData_CategoryData> CategoryData;
    
    FBMEquipmentData();
};

