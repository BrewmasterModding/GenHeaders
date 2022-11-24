#pragma once
#include "CoreMinimal.h"
#include "BMPlayerInventoryData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPlayerInventoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ActiveSlot;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AActor*> Inventory;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 MaxInventorySize;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentInventorySize;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SelectedSlot;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bInventoryUsable;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 bActiveSlotStowed;
    
    FBMPlayerInventoryData();
};

