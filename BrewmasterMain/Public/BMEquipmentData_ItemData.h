#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "BMEquipmentData_ItemData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMEquipmentData_ItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FDataTableRowHandle ItemReference;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName UniqueName;
    
    FBMEquipmentData_ItemData();
};

