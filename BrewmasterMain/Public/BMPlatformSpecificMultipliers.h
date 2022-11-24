#pragma once
#include "CoreMinimal.h"
#include "BMPlatformSpecificMultipliers.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPlatformSpecificMultipliers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Default_PC;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Default_PlayStation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Default_Switch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Default_Xbox;
    
    FBMPlatformSpecificMultipliers();
};

