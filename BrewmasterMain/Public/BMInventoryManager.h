#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMDynamicFurnitureData.h"
#include "EBMIngredientCategory.h"
#include "BMSaveableActorInterface.h"
#include "BMIngredientData.h"
#include "EBMInventoryStorageLocation.h"
#include "BMEquipmentData.h"
#include "BMPlayerOwnershipData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ESizeBand.h"
#include "BMCatalogueItemData.h"
#include "EBMEquipmentCategory.h"
#include "EBMFurnitureCategory.h"
#include "BMInventoryManager.generated.h"

class UDataTable;
class AActor;

UCLASS()
class BREWMASTERMAIN_API ABMInventoryManager : public AInfo, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<EBMInventoryStorageLocation, FBMEquipmentData> EquipmentData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<EBMInventoryStorageLocation, FBMIngredientData> IngredientData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<EBMInventoryStorageLocation, FBMDynamicFurnitureData> DynamicFurnitureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* MasterItemDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* MasterIngredientDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* MasterCatalogueDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* MasterFurnitureDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RefreshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FName, FBMPlayerOwnershipData> PlayerOwnershipData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FName> ItemsAvailableInShop;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform DeliveryBoxSpawnPos;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> DeliveryBoxClass;
    
protected:
    UPROPERTY(SaveGame)
    TMap<FName, FBMCatalogueItemData> DataToUnLockNextMonth;
    
    UPROPERTY(SaveGame)
    TMap<FName, int32> AmountOfDataToUnlockNextMonth;
    
    UPROPERTY(SaveGame)
    TMap<FBMCatalogueItemData, int32> PurchasedItems;
    
    UPROPERTY(SaveGame)
    bool bNewItemsToBuyThisSeason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EBMEquipmentCategory> PreferredOrderOfEquipmentCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EBMIngredientCategory> PreferredOrderOfIngredientCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EBMFurnitureCategory> PreferredOrderOfFurnitureCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ESizeBand> PreferredOrderOfEquipmentSizeBand;
    
public:
    ABMInventoryManager();
    UFUNCTION(BlueprintCallable)
    void UnlockNewSeasonItems();
    
    UFUNCTION(BlueprintCallable)
    void UnlockAllItems();
    
    UFUNCTION(BlueprintCallable)
    bool FindIfItemUnlocked(FName Item, bool NeedsToBeOwned);
    
    UFUNCTION(BlueprintCallable)
    void DebugUnlockNextSeasonItemsInShop();
    
    UFUNCTION(BlueprintCallable)
    void AddUnlockedItemInShop(FBMCatalogueItemData UnlockedItem);
    
    
    // Fix for true pure virtual functions not being implemented
};

