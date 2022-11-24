#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMHUDActionPrompt.generated.h"

class UBMRichText;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMHUDActionPrompt : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowGlyphIfUnbound;
    
    UBMHUDActionPrompt();
    UFUNCTION(BlueprintCallable)
    void SetShowUnboundActionGlyph(bool InShouldShowUnboundActionGlyph);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInteractionPromptText(const FText& ItemNameText, bool bIsInvalid);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAlignment(const bool bIsRightAligned);
    
    UFUNCTION(BlueprintCallable)
    bool GetShowUnboundActionGlyph();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetInteractionPromptText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMRichText* GetActivePromptTextWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMActionGlyph* GetActionPromptGlyph();
    
};

