#pragma once
#include "CoreMinimal.h"
#include "BMBaseFurniture.h"
#include "BMInventoryStorageUnit.generated.h"

class UBMStorageInteraction;
class UBMBinInteraction;

UCLASS()
class BREWMASTERMAIN_API ABMInventoryStorageUnit : public ABMBaseFurniture {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBMStorageInteraction* StorageInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBMBinInteraction* BinInteraction;
    
public:
    ABMInventoryStorageUnit();
};

