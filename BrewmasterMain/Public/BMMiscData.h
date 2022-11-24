#pragma once
#include "CoreMinimal.h"
#include "BMMiscData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMMiscData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LowTopCapSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MediumTopCapSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HighTopCapSections;
    
    FBMMiscData();
};

