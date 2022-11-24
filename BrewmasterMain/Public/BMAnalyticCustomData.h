#pragma once
#include "CoreMinimal.h"
#include "EBMAnalyticsCategory.h"
#include "BMAnalyticCustomData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAnalyticCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Season;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMAnalyticsCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AdditionalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Quantity;
    
    FBMAnalyticCustomData();
};

