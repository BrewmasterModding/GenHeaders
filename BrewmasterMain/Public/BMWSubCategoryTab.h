#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMWSubCategoryTab.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMWSubCategoryTab : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMWSubCategoryTab();
    UFUNCTION(BlueprintImplementableEvent)
    void SetSubCategoryTabIcon(FSlateBrush Icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsChecked(bool IsChecked);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool GetIsChecked();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastSelectedCategory();
    
};

