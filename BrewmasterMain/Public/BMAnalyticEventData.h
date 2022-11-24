#pragma once
#include "CoreMinimal.h"
#include "BMAnalyticEventData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAnalyticEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString EventCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString EventAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString EventLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString EventQuantity;
    
    FBMAnalyticEventData();
};

