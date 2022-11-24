#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMTooltipData.h"
#include "BMUserWidget.generated.h"

class UPanelWidget;
class UBMTooltipWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBMUserWidget();
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetPopUpAttachPanel();
    
    UFUNCTION(BlueprintCallable)
    UBMTooltipWidget* CreateTooltipWidget(FBMTooltipData TooltipData);
    
};

