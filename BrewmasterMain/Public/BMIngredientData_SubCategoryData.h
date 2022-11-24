#pragma once
#include "CoreMinimal.h"
#include "BMIngredientData_ItemData.h"
#include "BMIngredientData_SubCategoryData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIngredientData_SubCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> StorageUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMIngredientData_ItemData> ItemData;
    
    FBMIngredientData_SubCategoryData();
};

