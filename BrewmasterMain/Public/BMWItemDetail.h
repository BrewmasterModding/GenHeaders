#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMWItemDetail.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMWItemDetail : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMWItemDetail();
    UFUNCTION(BlueprintImplementableEvent)
    void SetStatValue(const FText& Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetStatName(const FText& Name);
    
};

