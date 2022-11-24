#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMInWorldInteraction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "BMHUDInteractionPromptSystem.generated.h"

class UBMHUDActionPrompt;
class UPanelWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMHUDInteractionPromptSystem : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FMargin PromptPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseRightAlignedGlyphs;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMHUDActionPrompt> HUD_ActionPromptClass;
    
public:
    UBMHUDInteractionPromptSystem();
    UFUNCTION()
    void UpdateLangugages();
    
    UFUNCTION(BlueprintCallable)
    void RemoveExtraInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPanelWidget* GetInteractionPromptsBox();
    
    UFUNCTION()
    void ClearCachedStringNames();
    
    UFUNCTION(BlueprintCallable)
    void AddExtraInteraction(FBMInWorldInteraction Interaction);
    
};

