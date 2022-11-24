#pragma once
#include "CoreMinimal.h"
#include "EBMEquipmentCategory.h"
#include "EBMFurnitureCategory.h"
#include "EBMEquipmentSubCategory.h"
#include "EBMFurnitureSubcategory.h"
#include "EBMIngredientSubCategory.h"
#include "EBMMastery.h"
#include "EBMIngredientCategory.h"
#include "BMCatalogueItemData.h"
#include "BMRandomRewardItem.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMRandomRewardItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<EBMEquipmentSubCategory> EquipmentSubCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<EBMFurnitureSubcategory> FurnitureSubCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<EBMIngredientSubCategory> IngredientSubCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<EBMFurnitureCategory> FurnitureCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<EBMEquipmentCategory> EquipmentCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<EBMIngredientCategory> IngredientCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    EBMMastery Mastery;
    
    UPROPERTY(SaveGame)
    FName ChosenItem;
    
    UPROPERTY(SaveGame)
    FBMCatalogueItemData ChosenItemData;
    
    FBMRandomRewardItem();
};

