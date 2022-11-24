#pragma once
#include "CoreMinimal.h"
#include "BMOverlayData.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMOverlayData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UUserWidget> OverlayWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldBeSavedInHistory;
    
    FBMOverlayData();
};

