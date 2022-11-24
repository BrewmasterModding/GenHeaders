#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EBMInput.h"
#include "BMTextButtonWidget.generated.h"

class UBMButton;
class UBMAnimatedStroke;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTextButtonWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlwaysHideActionGlyph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAnimatedStroke;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMInput ActionInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverridePressAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideHoverAudio;
    
    UBMTextButtonWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMButton* GetBMButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMAnimatedStroke* GetAnimatedStroke();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMActionGlyph* GetActionPromptGlyph();
    
};

