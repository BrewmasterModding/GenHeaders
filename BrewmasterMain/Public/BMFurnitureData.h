#pragma once
#include "CoreMinimal.h"
#include "EBMFurnitureSubcategory.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMFurnitureCategory.h"
#include "BMFurnitureData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMFurnitureData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EBMFurnitureCategory FurnitureCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EBMFurnitureSubcategory Subcategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanPlaceItemsOn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanEverBeMovedByPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanPlaceOnShelf;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanPlaceOnWall;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanPlaceOnSurface;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanPlaceOnFloor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsMagnetic;
    
    FBMFurnitureData();
};

