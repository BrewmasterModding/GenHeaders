#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ScrollBoxStyle -FallbackName=ScrollBoxStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "ScrollBoxWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FScrollBoxStyle ScrollBoxStyle;
    
    UScrollBoxWidgetStyle();
};

