#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "BMShoppingCartData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMShoppingCartData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle ItemData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Amount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PriceForOne;
    
    FBMShoppingCartData();
};

