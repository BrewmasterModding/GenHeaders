#pragma once
#include "CoreMinimal.h"
#include "EBMIngredientContainerSize.h"
#include "ESizeBand.h"
#include "SocketData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FSocketData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UClass*> ClassesThatCanInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMIngredientContainerSize MinimumIngredientSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMIngredientContainerSize MaximumIngredientSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESizeBand MinimumObjectSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESizeBand MaximumObjectSize;
    
    FSocketData();
};

