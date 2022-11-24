#pragma once
#include "CoreMinimal.h"
#include "EBMFurnitureSubcategory.h"
#include "EBMInventoryStorageLocation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMFurnitureCategory.h"
#include "EBMEquipmentSubCategory.h"
#include "EBMEquipmentCategory.h"
#include "EBMEquipmentMaterial.h"
#include "EBMIngredientContainerCategory.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ESizeBand.h"
#include "BMItemData.generated.h"

class UTexture2D;
class AActor;
class UStreamableRenderAsset;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMItemData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName UniqueItemName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBMInventoryStorageLocation StorageLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBMEquipmentCategory EquipmentCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBMEquipmentSubCategory EquipmentSubCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBMEquipmentMaterial EquipmentMaterialCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBMIngredientContainerCategory IngredientContainerCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBMFurnitureCategory FurnitureCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBMFurnitureSubcategory FurnitureSubCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> UIIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> ItemClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle ItemSpecificDataSource;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UStreamableRenderAsset> RootAssetOvverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDynamicObject;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCollisionEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Grams;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESizeBand EquipmentSizeBand;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool Transparent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DimensionX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DimensionY;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DimensionZ;
    
    FBMItemData();
};

