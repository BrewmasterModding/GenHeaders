#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMKeywordWidget.generated.h"

class URichTextBlock;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMKeywordWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText KeywordText;
    
    UBMKeywordWidget();
    UFUNCTION(BlueprintImplementableEvent)
    FSlateColor GetTooltipSlateColor();
    
    UFUNCTION(BlueprintImplementableEvent)
    URichTextBlock* GetRichTextBlock();
    
};

