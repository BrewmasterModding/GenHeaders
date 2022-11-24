#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "OnSelectedTabDelegate.h"
#include "BMCategoryTab.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCategoryTab : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOnSelectedTab SelectedTabDelegate;
    
    UBMCategoryTab();
    UFUNCTION(BlueprintCallable)
    void BroadcastSelectedTab(int32 Tab);
    
};

