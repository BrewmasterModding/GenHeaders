#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMHUDXrayModeWidget.h"
#include "BMHUDContextualInfomationWidget.generated.h"

class UBMHUDActionPrompt;
class UVerticalBox;
class UPanelWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMHUDContextualInfomationWidget : public UBMHUDXrayModeWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMHUDActionPrompt> HUD_ActionPromptClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> ShowActionIDPrompts;
    
public:
    UBMHUDContextualInfomationWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAmountPoured(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UVerticalBox* GetVerticalBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetAmountPouredPanel();
    
};

