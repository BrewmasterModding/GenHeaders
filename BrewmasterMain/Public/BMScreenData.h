#pragma once
#include "CoreMinimal.h"
#include "EBMBookType.h"
#include "BMScreenData.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMScreenData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UUserWidget> ScreenWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    EBMBookType BookType;
    
    FBMScreenData();
};

