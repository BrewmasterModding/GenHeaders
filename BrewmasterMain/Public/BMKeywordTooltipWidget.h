#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMKeywordTooltipWidget.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMKeywordTooltipWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText HoverHeader;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText HoverText;
    
    UBMKeywordTooltipWidget();
};

