#pragma once
#include "CoreMinimal.h"
#include "BMNotificationAnimationTimings.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMNotificationAnimationTimings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AnimateInTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float IdleTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AnimateOutTime;
    
    FBMNotificationAnimationTimings();
};

