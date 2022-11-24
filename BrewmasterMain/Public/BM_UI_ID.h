#pragma once
#include "CoreMinimal.h"
#include "BM_UI_ID.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBM_UI_ID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName MainID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName SubScreenID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bIsOverlay;
    
    FBM_UI_ID();
};

