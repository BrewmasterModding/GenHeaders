#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EBMResource.h"
#include "BMResourceWidget.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMResourceWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool ShowCurrentAmountTextInTooltip;
    
    UBMResourceWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetStyle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRewardType(EBMResource Resource);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetItemImage(UTexture2D* ImageTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAmountText(const FText& Amount);
    
};

