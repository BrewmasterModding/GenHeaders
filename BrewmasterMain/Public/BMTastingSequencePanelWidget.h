#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMTastingSequencePanelWidget.generated.h"

class URichTextBlock;
class UCanvasPanelSlot;
class UWidget;
class UTweenContainer;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTastingSequencePanelWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UCanvasPanelSlot* srmHandleSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UWidget* srmWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    URichTextBlock* srmValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UWidget* carbonationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    URichTextBlock* carbonationValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUserWidget* skipButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUserWidget* ContinueButton;
    
private:
    UPROPERTY()
    UTweenContainer* ActiveTweenContainer;
    
public:
    UBMTastingSequencePanelWidget();
    UFUNCTION(BlueprintCallable)
    void SkipActiveTween();
    
    UFUNCTION(BlueprintCallable)
    void PlayTweenOut(UTweenContainer* pAppendToTweenContainer);
    
    UFUNCTION(BlueprintCallable)
    void PlayTweenIn(UTweenContainer* pAppendToTweenContainer);
    
};

