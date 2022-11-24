#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "BMAnalyticApplicationData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAnalyticApplicationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime SessionStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime SessionStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SessionDurationInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SessionDate;
    
    FBMAnalyticApplicationData();
};

